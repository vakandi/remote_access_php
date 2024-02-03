#!/bin/sh


# Capture video from webcam and send it over a WebSocket

ffmpeg -f avfoundation -framerate 30 -video_size 640x480 -i "default" -pix_fmt yuv420p -f mpegts -codec:v mpeg1video -s 640x480 -b:v 1000k -bf 0 -codec:a mp2 -ar 44100 -b:a 128k -bufsize 64000 -f mpegts - | websocat -b ws://localhost:8080

