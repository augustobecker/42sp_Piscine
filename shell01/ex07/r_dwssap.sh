#!/bin/sh
cat /etc/passwd | sed -n '/#/!p' | sed -n "n;p" | awk -F: '{print $1}' | rev | sort -r | sed -n '$FT_LINE1, $FT_LINE2 p' | paste -s -d ',' | sed 's/,/, /g' | sed 's/$/./' | tr -d "\n"