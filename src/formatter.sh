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
        printf "\n\nlanguages:\nc++\n.h (c++ header)"

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
		/usr/local/bin/filereader $FI $LA $A3
	elif [[ $A3 == "FRMT" ]]
	then
		/usr/local/bin/filereader "Output_${FI}" $LA $A3
		mv "Temp_Output_${FI}" "Output_${FI}"
	fi
}

if [[ $# -eq 0 ]]
then
	helpMSG
else
	for i in $@; do

		if [[ $i == "--help" || $i == "-h" ]]
		then
			helpMSG
		else
			if [[ $i == "--format" || $i == "-f" ]]; then
				FF=1
				A3="FRMT"
			fi

			if [[ $i == "--comment" || $i == "-c" ]]; then
				CF=1
			fi
		fi
	done
	if [[ $FF == 1 ]]
	then
		prettify
	fi
	if [[ $CF == 1 ]]
	then
		fileread
	fi
fi
