#!/bin/sh
saved=".file_nohup.tmp"
find "/Users/$USER/" -type f -name nohup.out -print > "$saved"
loop=$(wc -l < "$saved")
var=1
while [ "$var" -le "$loop" ]
do
	file=$(sed -n "${var}p" < "$saved")
	echo "$file removing..."
	rm "$file"
	echo "\n$file removed"
	echo "loops : $var"
	var=$((var+1))
done
rm "$saved"

