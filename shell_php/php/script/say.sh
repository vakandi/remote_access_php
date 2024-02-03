#!/bin/sh

# Check if an argument was provided
if [ $# -eq 0 ]; then
  echo "Usage: $0 [up/down]"
  exit 1
fi
say -v Thomas "$1"
