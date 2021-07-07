#!/bin/bash

dependencies=("g++","boost")
cmpdep=("g++","boost")
DF=0
installdir=.
aliasdir=~/.bash_aliases
installcmd=("the relevant command", "the relevant command")

for i in $#
do
	while [[ "$1" =~ ^- && ! "$1" == "--" ]]
	do case $1 in
		-d | --directory )
		shift; installdir=$1
		;;
		-b | --bash )
		if [[ -f "~/.bash_aliases" ]]; then
			aliasdir=~/.bash_aliases
		else
			aliasdir=~/.bashrc
		fi
		;;
		-z | --zsh )
		aliasdir=~/.zshrc
		;;
		-A | --Arch )
		dependencies[0]=$(which g++)
		dependencies[1]=$(pacman -Q | grep boost)
		installcmd[0]=": sudo pacman -S g++"
		installcmd[1]=": sudo pacman -S boost"
		;;
		-D | --Debian )
		dependencies[0]=$(dpkg --list | grep g++)
		dependencies[1]=$(dpkg --list | grep libboost)
		installcmd[0]=": sudo apt-get install g++"
		installcmd[1]=": sudo apt-get install libboost-all-dev"
		;;
		-M | --Other )
		echo "compiling under assumption of g++"
		dependencies+="g++"
		dependencies+="boost"
		;;
		esac; shift; done
		if [[ "$1" == '--' ]]; then shift; fi
done
depi=0
for dep in $dependencies
do
	if [[ $dep == ${cmpdep[depi]} ]]
	then
		echo "${dep} has not been installed, please install it by running ${installcmd[depi]} or specify '-M' in script to attempt compilation anyways"
	fi
	((depi=depi+1))
done

if [[ "${installdir}" == "." ]]
then
	installdir=$(echo $PWD)
fi

echo "alias abstract='bash ${installdir}/formatter.sh'" >> ${aliasdir}
wait

trap "rm ~/.filereader ${installdir/formatter.sh}; sed -i '$ d' ${aliasdir}; exit 1"HUP INT QUIT TERM

echo "compiling code"
g++ -I src/cppcode -I src/pythoncode -I src src/filereader.cpp -o ~/.filereader -lboost_regex
wait

echo "exporting formatter"
cp src/formatter.sh ${installdir}/formatter.sh
wait

echo "generating alias"
source ${aliasdir}
wait

