#!/bin/bash

for i in {1..66}
do
	rm./cppg/cppm/cppmerge${i}.txt
        paste -d ": " ./cppg/cppc/cppcommands${i}.txt ./cppg/cppd/cppdescriptions${i}.txt > ./cppg/cppm/cppmerge${i}.txt
        wait
done

for i in {1..66}
do
	#paste -d ": " ./cppg/cppc/cppcommands${i}.txt ./cppg/cppd/cppdescriptions${i}.txt > ./cppg/cppm/cppmerge${i}.txt
#	rm ./cppg/cppm/cppmerge${i}.txt
#	wait
#	touch ./cppg/cppm/cppmerge${i}.txt
#	wait
#	cppc=$(cat ./cppg/cppc/cppcommands${i}.txt)
#	wait
#	j=0
#	wait
	cat ./cppg/cppm/cppmerge${i}.txt | while IFS=":" read cppc cppd
	do
		#for(( j=0; j <=${#cppc[@]};j++ ))
		echo ${cppc}
		echo $j
		echo ${cppd}
		printf "\n"
		printf 'case "%s":\ncomment += "%s"\nbreak;\n' ${cppc} "${cppd}" >> ./cppg/cppf/cppformatted${i}.txt
		wait
		((j=j+1))
		wait
	done
done
