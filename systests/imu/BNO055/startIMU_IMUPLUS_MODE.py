#!/usr/bin/env python3
#
# https://www.dexterindustries.com
#
# Copyright (c) 2017 Dexter Industries
# Released under the MIT license (http://choosealicense.com/licenses/mit/).
# For more information see https://github.com/DexterInd/DI_Sensors/blob/master/LICENSE.md
#
# File: startIMU_IMUPLUS_MODE.py

# ./startIMU_IMUPLUS_MODE.py  or python3 startIMU_IMUPLUS_MODE.py
#
#
# Uses Alan's extended mutex protected SafeIMUSensor() class from ros_safe_inertial_measurement_unit.py
# and ros_inertial_measurement_unit.py that allows passing/setting BNO055.OPERATION_MODE_IMUPLUS
# (Fusion using only gyros and accellerometers - no magnemometers)
# to start the BNO055, (sets heading, roll, pitch to 0,0,0)
#
# Note puts chip in IMUPLUS operation mode
# (Fusion uses only Gyros and Accels, no Mags)

from __future__ import print_function
from __future__ import division

import time
from datetime import datetime as dt
import sys
sys.path.append("/home/pi/rosbot-on-gopigo3/plib")
from ros_safe_inertial_measurement_unit import SafeIMUSensor
import rosBNO055 as BNO055

VERBOSITY = True
REQ_MODE = BNO055.OPERATION_MODE_IMUPLUS
IMUPORT = "AD1"   # Must be AD1 or AD2 only



def main():

    print("\nStart DI IMU (BNO055 chip)")
    print("Using mutex-protected, exception-tolerant SW I2C on GoPiGo3 port {}\n".format(IMUPORT))

    imu = SafeIMUSensor(port = IMUPORT, use_mutex = True, mode = REQ_MODE, init=True, verbose = VERBOSITY)

    time.sleep(1.0)  # allow for all measurements to initialize

    exCnt = imu.getExceptionCount()

    op_mode_str = imu.safe_get_op_mode_str()

    print("Initialized in {} mode".format(op_mode_str))

    if (op_mode_str=="IMUPLU"):
        print("(Fusion based on Gyros, and Accels - no mags)")
    elif (op_mode_str=="NDOF"):
        print("(Fusion based on Gyros, Accels, and Mags)")

    imu.printCalStatus()
    print("\n")

    try:
        imu.readAndPrint(cr=True)
        print("\nExiting startIMU_IMUPLUS_MODE.py")

    except KeyboardInterrupt:
        print("\nCntrl-C detected. Exiting..")


# Main loop
if __name__ == '__main__':
	main()

