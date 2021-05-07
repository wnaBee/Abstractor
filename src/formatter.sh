#!/bin/bash

if [[ $1 == "--help" || $1 == "-h" ]]
then
	printf "abstract [filename] [language] [-options]\n\n"
	printf "options:\n--comment	creates automated comments for every line\n -c		of code in the program"
	printf "\n\n--format	deobfuscates code and makes it look nice\n -f"
else

	touch n0Em3ejdS
	if [[ $3 == "--format" || $3 == "-f" ]]
	then
		echo $1 $3
		sed $1 -e "s/{/{\n/g" | sed $1 -e "s/}/}\n/g" | sed $1 -e "s/;/;\n/g" > n0Em3ejdS
		mv n0Em3ejdS "Output_${1}"
	fi

	if [[ $3 == "--comment" || $3 == "-c" ]]
	then
		/usr/local/bin/filereader $1 $2
	fi

	if [[ $3 == "-fc" || $3 == "-cf" ]]
	then
		sed $1 -e "s/{/{\n/g" | sed $1 -e "s/}/}\n/g" | sed $1 -e "s/;/;\n/g" >> n0Em3ejdS
		/usr/local/bin/filereader n0Em3ejdS $2
		mv n0Em3ejdS "Output_${1}"
	fi
fi
