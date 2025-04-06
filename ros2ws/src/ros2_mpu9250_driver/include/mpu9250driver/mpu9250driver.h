#ifndef MPU9250DRIVER_H
#define MPU9250DRIVER_H

#include "mpu9250sensor.h"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
// #include "rmw/types.h"
#include "rclcpp/qos.hpp"
#include "rmw/qos_profiles.h"

// MOD: slowrunner use sensor_data qos instead of the default: reliable
// rclcpp::QoS qos_;

class MPU9250Driver : public rclcpp::Node {
 public:
  MPU9250Driver();

 private:
  rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr publisher_;
  std::unique_ptr<MPU9250Sensor> mpu9250_;
  size_t count_;
  rclcpp::TimerBase::SharedPtr timer_;
  void handleInput();
  void declareParameters();
  void calculateOrientation(sensor_msgs::msg::Imu& imu_message);
};

#endif  // MPU9250DRIVER_H
