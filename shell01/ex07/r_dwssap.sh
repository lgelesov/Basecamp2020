#!/bin/sh
cat /etc/passwd | cut -d: --complement -f5 | sed -n '2~2p' | sed "s/:.*//g" | rev | sort -r |awk -v L1=$FT_LINE1 -v L2=$FT_LINE2 'NR >= L1 && NR <= L2'|sed -z  "s/\\n/, /g;" | sed 's/, $/./'