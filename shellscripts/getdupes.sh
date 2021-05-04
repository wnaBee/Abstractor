#!/bin/bash

cat duplicates.txt | while read line
do
	cat cppswitch.h | grep --color=always -A1 "$line"
	wait
	#echo $dupes # | sed -E "s/break;/\n/gip"
	#wait
	echo "_________________________________________________________________________________________________________"
done
