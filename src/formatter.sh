#!/bin/bash

FF=0
CF=0
A3=NONE
FI=$1
LA=$2

helpMSG() {
	printf "abstract [filename] [language] [-options]\n\n"
        printf "options:\n--comment     	creates automated comments for every line\n -c		of code in the program"
        printf "\n\n--format    	deobfuscates code and makes it look nice\n -f"
	printf "\n\n--help		displays this message\n -h"
        printf "\n\nlanguages:\nc++\n.h (c++ header)\npy | python"

}

prettify() {
	touch n0Em3ejdS
	sed $FI -e "s/{/{\n/g" | sed -e "s/}/}\n/g" | sed -e "s/;/;\n/g" > n0Em3ejdS
	mv n0Em3ejdS "Output_${FI}"
	A3="FRMT"
}

fileread() {
	if [[ $A3 == "NONE" ]]
	then
		~/.filereader $FI2 $LA $A3
	elif [[ $A3 == "FRMT" ]]
	then
		~/.filereader "Output_${FI2}" $LA $A3
	fi
}

if [[ $# < 3 ]]
then
	helpMSG
else

	while [[ "$3" =~ ^- && ! "$3" == "--" ]]
	do case $3 in
		-h | --help )
	    	helpMSG
	    	;;
	  	-c | --comment )
		CF=1
	  	;;
	  	-f | --format )
	   	FF=1
		;;
	esac; shift; done
	if [[ "$3" == '--' ]]; then shift; fi


	if [[ $FF == 1 ]]
	then
		prettify
	fi
	if [[ $CF == 1 ]]
	then
		fileread
	fi
fi
