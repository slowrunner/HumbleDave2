#!/usr/bin/env python3

# FILE: battery_node.py

"""

  This node uses the EasyINA219 sensor driver 
  to monitor the GoPiGo3 Li-Ion battery and 
  publish /battery_status topic with
  - volts
  - milliamps
  - watts
  - watthours  (since charge/discharge state change)
  - charging (boolean)

    dave_interfaces.msg.BatteryState.msg
        std_msgs/Header header
        float32 volts
        float32 milliamps
        float32 watts
        float32 watthours
        bool    charging
        int16   capacity
        int16   percent
        float32 last_charge
        float32 last_discharge

    CLI:   ros2 topic echo /battery_state dave_interfaces/msg/BatteryState


"""


from dave_interfaces.msg import BatteryState

import rclpy
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
from std_msgs.msg import Header

import numpy as np
import sys
from datetime import datetime as dt
from easy_ina219 import EasyINA219
from ina219 import DeviceRangeError


class Battery(Node):


    # egpg.volt() Data points
    # 2024-4-2 Data  4h19m 12.5v to 8.91v at cutoff - To Cutoff: 9.84v = 5m, 10.15v = 5% 13m, 10.29v = 10% 26m, 10.32v = 12% 20m
    # 2024-09-08 Data points average three INA219 voltages:  charge till -100mA, dock at 10.1v
    DISCHARGING_VOLTAGE_POINTS = \
        [10.10, 10.12, 10.20, 10.29, 10.36, 10.42,  10.47, 10.52,  10.57,  10.61,   10.67,  10.74,  10.83, 10.93,  11.04,  11.16,  11.27,  11.39,   11.52,  11.67,  11.80, 11.90]
    CHARGING_VOLTAGE_POINTS = \
        [10.96, 11.14, 11.19, 11.27, 11.38, 11.49,  11.58, 11.65,  11.72,  11.83,   11.87,  11.91,  11.95, 11.98,  12.01,  12.03,  12.05,  12.06,   12.08,  12.09,  12.10, 12.15]
    BATTERY_REMAINING = \
        [0.0,   0.05,  0.10,  0.15,   0.20,  0.25,   0.30,  0.35,   0.40,   0.45,    0.50,   0.55,   0.60,  0.65,   0.70,   0.75,   0.80,   0.85,    0.90,   0.95,   0.99,  1.00]

    def pctRemaining(self):
        FULL_CHARGE = 1.0
        PROTECTION_CUTOFF = 0.0
        if self.charging:
            voltage_points=self.CHARGING_VOLTAGE_POINTS
        else:
            voltage_points=self.DISCHARGING_VOLTAGE_POINTS

        pctRemaining = int(np.interp(self.volts,voltage_points,self.BATTERY_REMAINING, right=FULL_CHARGE, left=PROTECTION_CUTOFF) * 100)
        return pctRemaining



    def __init__(self):
        super().__init__('battery')
        self.eINA219 = EasyINA219()  # default use_mutex=True
        self.power_meter = 0
        self.measurement_count = 0
        self.rate = 1   # Hz

        # setting frame_id to urdf link element "imu_link"

        self.battery_state_pub = self.create_publisher(BatteryState, 'battery_state', qos_profile=10)
        self.milliamps = self.eINA219.ave_milliamps()
        self.charging = (self.milliamps < 0)
        self.last_charging = self.charging
        self.volts = self.eINA219.ave_volts()
        self.watts = self.eINA219.ave_watts()
        self.capacity = 24
        self.percent = self.pctRemaining()
        self.last_charge = 0.0
        self.last_discharge = 0.0
        self.msg = BatteryState()
        self.msg.header = Header(stamp=self.get_clock().now().to_msg(), frame_id="base_link")
        self.timer = self.create_timer(1/self.rate, self.timer_callback)

    def timer_callback(self):


        try:
            self.milliamps = self.eINA219.ave_milliamps()
            self.charging = (self.milliamps < 0)
            self.volts = self.eINA219.ave_volts()
            self.watts = self.eINA219.ave_watts()
            if not (self.charging == self.last_charging):  # debounce chargeing transitions
                if (self.last_charging == True) and (abs(self.power_meter) > 1):
                    self.last_charge = self.power_meter
                elif (self.last_charging == False) and (abs(self.power_meter) > 1):
                    self.last_discharge = self.power_meter
                self.last_charging = self.charging
                self.power_meter = 0
            self.power_meter += self.watts / self.rate / 3600.0
            if self.charging == True:
                self.percent = self.pctRemaining()
            else:
                self.percent = self.pctRemaining()

            # fill the message values
            self.msg.header.stamp = self.get_clock().now().to_msg()
            self.msg.milliamps = self.milliamps
            self.msg.volts = self.volts
            self.msg.charging = self.charging
            self.msg.watts = self.watts
            self.msg.watthours = self.power_meter
            self.msg.percent = self.percent
            self.msg.capacity = self.capacity
            self.msg.last_discharge = self.last_discharge
            self.msg.last_charge = self.last_charge

            # publish it
            self.battery_state_pub.publish(self.msg)
        except DeviceRangeError as e:
            print(3)
            pass
        except Exception:
                pass                # catch shutdown error



def main(args=None):
    rclpy.init(args=args)

    battery_node = Battery()

    try:
        rclpy.spin(battery_node)
    except KeyboardInterrupt:
        pass
    except ExternalShutdownException:
        sys.exit(1)
    finally:
        battery_node.destroy_node()
        try:
            rclpy.try_shutdown()
        except:
            pass

if __name__ == '__main__':
    main()
