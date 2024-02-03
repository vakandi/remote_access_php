#!/bin/sh
while true
do
	TERMUX_RANDOM="$(shuf -i 3-7 -n 5 |tr "\n" "-" | rev | cut -c2- | rev)"
	mkdir sources$TERMUX_RANDOM
	echo "int main(int argc, char argv){ \nreturn(0);\n" > sources$TERMUX_RANDOM/main$TERMUX_RANDOM.c
	sleep 2s
done
