#!/bin/bash

for i in {1..66}
do
	#paste -d ": " ./cppg/cppc/cppcommands${i}.txt ./cppg/cppd/cppdescriptions${i}.txt > ./cppg/cppm/cppmerge${i}.txt
	rm ./cppg/cppm/cppmerge${i}.txt
	wait
	touch ./cppg/cppm/cppmerge${i}.txt
	wait
	cppc=$(cat ./cppg/cppc/cppcommands${i}.txt)
	wait
	cppd=$(cat ./cppg/cppd/cppdescriptions${i}.txt)
	wait
	for(( j=0; j <=${#cppc[@]};j++ ))
	do
		echo ${cppc[j]}
		printf "\n"
		echo ${cppd[j]}
		printf "\n"
		printf 'case "%s":\ncomment += "%s"\nbreak;\n' cppc[j] cppd[j] >> ./cppg/cppm/cppmerge${i}.txt
		wait
	done
done
