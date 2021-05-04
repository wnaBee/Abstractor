#!/bin/bash
for i in {1..66}
do
	rm./cppg/cppm/cppmerge${i}.txt
        paste -d ": " ./cppg/cppc/cppcommands${i}.txt ./cppg/cppd/cppdescriptions${i}.txt > ./cppg/cppm/cppmerge${i}.txt
        wait
done

for i in {1..66}
do
	rm ./cppg/cppm/cppmerge${i}.txt
	wait
	touch ./cppg/cppm/cppmerge${i}.txt
	wait
	cppc=$(cat ./cppg/cppc/cppcommands${i}.txt)
	wait
	j=1
	cat ./operators.txt | while IFS=":" read cppc cppd
	do
		echo ${cppc}
		echo $j
		echo ${cppd}
		printf "\n"
		printf 'case kwd::%s:\n//%s\ncomment += "%s";\nbreak;\n' "opt${j}" "${cppc}" "${cppd}" >> ./codetemplates/operatorswitchcmd.txt
		wait
		((j=j+1))
		wait
	done
done
