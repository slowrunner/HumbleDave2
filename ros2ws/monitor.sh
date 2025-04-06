#!/bin/bash


while true; \
do echo -e "\n********** (non-ROS) GoPiGo3 MONITOR ******************************"; \
echo -n `date +"%A %D"`; \
echo ""; \
uptime; \
vcgencmd measure_temp && vcgencmd measure_clock arm && vcgencmd get_throttled; \
python3 /home/ubuntu/HumbleDave2/plib/battery.py; 
free -h; \
# python3 /home/ubuntu/HumbleDave2/ros2ws/gopigo3_battery.py; \
sleep 10; \
echo " "; \
done
