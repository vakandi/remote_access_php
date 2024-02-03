#!/bin/sh
ps -ax | grep "php -S 127.0.0.1" | sed '$ d'

