#!/bin/bash

if [ "$1" == "up" ]; then
  osascript -e "set volume output volume ((output volume of (get volume settings)) + 10)"
elif [ "$1" == "down" ]; then
  osascript -e "set volume output volume ((output volume of (get volume settings)) - 10)"
else
  echo "Usage: $0 [up/down]"
  exit 1
fi

