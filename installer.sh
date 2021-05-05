#!/bin/bash

compchk=$(dpkg --list | grep g++)
DF=0

if [[ -z ${compchk} ]]
then
	echo "g++ has not been installed, please install it by running: sudo apt-get install g++"
else
	g++ src/filereader.cpp -o filereader
fi


