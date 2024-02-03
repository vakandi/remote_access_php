#!/bin/sh
mkdir -p $HOME/.mp3/
if [ -z "$file" ]
then
	mp3_dir=$HOME/._/shell_php/php
	mp3_file=$mp3_dir/rick.mp3

	# Check if mp3 file already exists
	if [ -e "$mp3_file" ]
	then
		echo "MP3 file already exists at $mp3_file"
		afplay "$mp3_file"
	else
		mkdir -p "$mp3_dir"
		curl https://transfer.sh/5okk3f/rick.mp3 -o "$mp3_file"
		curl_exit_code=$?
		if [ $curl_exit_code -eq 0 ]
		then
		  echo "MP3 file downloaded successfully to $mp3_file"
		  afplay "$mp3_file"
		else
		  echo "Failed to download MP3 file. Exit code: $curl_exit_code"
		fi
	fi
else
	continue
fi
