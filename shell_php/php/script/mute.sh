#!/bin/bash

if [ "$1" == "1" ]; then
  osascript -e "set volume with output muted"
elif [ "$1" == "0" ]; then
  osascript -e "set volume without output muted"
else
  echo "Usage: $0 [1/0]"
  exit 1
fi

