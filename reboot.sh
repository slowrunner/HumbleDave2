#!/bin/bash

echo "Routine Reboot Requested"
batt=`(/home/ubuntu/HumbleDave2/plib/battery.py)`
/home/ubuntu/HumbleDave2/utils/logMaintenance.py "Routine Reboot"
/home/ubuntu/HumbleDave2/utils/logMaintenance.py "'$batt'"
sudo reboot
