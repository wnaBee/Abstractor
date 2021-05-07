#!/bin/bash

compchk=$(dpkg --list | grep g++)
DF=0

if [[ -z ${compchk} ]]
then
	echo "g++ has not been installed, please install it by running: sudo apt-get install g++"
else
	sudo g++ src/filereader.cpp -o /usr/bin/filereader
	echo "alias abstract='/usr/bin/filereader'" >> ~/.bash_aliases
	source ~/.bash_aliases
fi


