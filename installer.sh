#!/usr/bin/env bash

dependencies=("g++" "boost")
cmpdep=("g++" "boost")
DF=0
aliasdir=~/.bash_aliases
installdir=.
installcmd=("the relevant command" "the relevant command")
args=$#

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
		installcmd[0]="sudo pacman -S g++"
		installcmd[1]="sudo pacman -S boost"
		;;
		-D | --Debian )
		dependencies[0]=$(dpkg --list | grep g++)
		dependencies[1]=$(dpkg --list | grep libboost)
		installcmd[0]="sudo apt-get install g++"
		installcmd[1]="sudo apt-get install libboost-all-dev"
		;;
		-M | --Other )
		echo "compiling under assumption of g++"
		dependencies+="g++ got"
		dependencies+="boost got"
		;;
		esac; shift; done
		if [[ "$1" == '--' ]]; then shift; fi
done
installpath=$(realpath ${installdir})
echo "alias abstract='${installpath}/filereader'" >> ${aliasdir}
wait

trap "rm ${installdir}/filereader; sed -i '$ d' ${aliasdir}; exit 1"HUP INT QUIT TERM

depi=0
if [[ $args < 1 ]]
then
	printf "Example: \nbash installer.sh -M -z -d ~/programs \n\nOptions: \n-A	Install on a pacman based plattform \n-D	Install on an apt based plattform \n-M	Presume installation of dependencies and proceed \n-b	Generate alias for bash (default, ~/.bash_aliases) \n-z	Generate alias for zsh \n-d	Specify installation directory\n"
	exit
fi
for dep in $dependencies
do
	if [[ $dep == ${cmpdep[depi]} ]]
	then
		eval ${installcmd[depi]} || echo "assuming depencies are installed"
	fi
	((depi=depi+1))
done

echo "compiling code"
g++ -I src/cppcode -I src/pythoncode -I src src/filereader.cpp -o ${installdir}/filereader -lboost_regex
wait

echo "generating alias"
. ${aliasdir}
wait

