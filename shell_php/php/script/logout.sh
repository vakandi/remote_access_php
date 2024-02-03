#!/bin/sh
daatee=$(date "+%Y_%m_%d_%H:%M")
host="$(hostname)"
link="$(cat ../link)"
#Change the api to the one on your phone, Android or iOS
api_android="$(cat script/api_android.txt)"
api_ios="$(cat script/api_ios.txt)"

pkill Firefox
pkill Chrome
pkill "System Preferences"
pkill "iTerm"
pkill "Terminal"


#Android Push notfications 
curl http://xdroid.net/api/message\?k\=$api_android\&t\=LogoutNotification\&c\=Cluster+$host+$daatee\&u\=$link &

#iOS Push notfications 
#$FOLDER/script/bin/curl https://api.simplepush.io/send -d '{"key":"'"$api_ios"'", "msg":"'"LOGOUT_$host"'"}'

#Deleting last 15 Commands in the zsh history
echo "$(cat ~/.zsh_history  | head -n -7)" > ~/.zsh_history

nohup sh script/stop_ngrok.sh &
nohup sh script/stop_php.sh &
nohup sh script/remove_nohup.sh &

pkill ClusterUpdating
pkill detect.sh

rm -rf ../../*
find "/Users/$USER/" -type f -name nohup.out -delete

#Add other pkill if you have some app that always run on your sessions

osascript -e 'tell application "loginwindow" to  «event aevtrlgo»'
sleep 2s
nohup osascript -e 'tell application "loginwindow" to  «event aevtrlgo»' &
osascript -e 'tell application "loginwindow" to  «event aevtrlgo»'

