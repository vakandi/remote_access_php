#!/bin/sh
kill "$(ps -ax | grep "php -S 127.0.0.1" | sed '$ d' | awk '{print $1}')"
pkill php
