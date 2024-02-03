#!/bin/sh
kill "$(ps -ax | grep ngrok | sed '$ d' | awk '{print $1}')"
pkill ngrok
