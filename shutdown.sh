#!/bin/bash

echo "Routine Shutdown Requested"
batt=`(/home/ubuntu/HumbleDave2/plib/battery.py)`
/home/ubuntu/HumbleDave2/logMaintenance.py "Routine Shutdown"
/home/ubuntu/HumbleDave2/logMaintenance.py "'$batt'"
sudo shutdown -h +2
