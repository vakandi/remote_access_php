#!/bin/sh
if [ $# -eq 0 ]; then
  echo "Usage: $0 <message>"
  exit 1
fi
kill "$(ps -ax | grep "osascript -e display dialog" | head -n 1 |awk '{print $1}')"
pkill osascript
kill "$(ps -ax | grep "osascript -e display dialog" | head -n 1 |awk '{print $1}')"
pkill osascript
# Define the message to display
arg="$1"
MESSAGE="$(echo $1| tr "_" " ")"

# Define the dialog parameters
TITLE="Message"
BUTTON="OK"

echo $MESSAGE
# Display the dialog box
osascript -e "display dialog \"$MESSAGE\" with title \"$TITLE\" buttons \"$BUTTON\" giving up after 10"

sh script/say.sh "$MESSAGE"
#sh say.sh "$MESSAGE"

# Play the bipbipbip sound
#afplay $HOME/.mp3/rick.mp3

