#!/bin/sh
FOLDER="path"
kill "$(ps -ax | grep "lock_detect.sh" | sed '$ d' | awk '{print $1}')"
pkill -f lock_detect.sh
pkill -f $FOLDER/script/lock_detect.sh
/usr/bin/pmset displaysleepnow
