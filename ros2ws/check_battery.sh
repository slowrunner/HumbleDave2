#!/bin/bash

echo -e "\n*** Checking Battery with GoPiGo3 API"
# python3 /home/pi/GoPi5Go/ros2ws/gopigo3_battery.py
python3 gopigo3_battery.py

echo -e "\n*** Checking Battery with ROS2"; 
echo "ros2 topic echo --once /battery_state"; 
ros2 topic echo --once /battery_state; 

echo -e "\n*** Checking Battery from PiOS"
python3 /home/ubuntu/HumbleDave2/plib/battery.py
