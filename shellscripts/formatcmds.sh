#!/bin/bash
#removes all dupes
#cat cppcommands.txt | sort -u | grep -v ":" > temp.txt

#ignores \n
#awk 'NF{x[$0]++; print (x[$0]>1?"//"$0:$0); next}1' cppcommands.txt | grep -v "//" | grep -v ":" > temp.txt

#merges file by line and deliniator
#paste -d ":" cppcommands.txt cppdescriptions.txt > cppmerge.txt

#delete blank lines
#sed -r '/^\s*$/d'
#i'm getting stupid close figure this shit out m8
lastl=""

for i in {1..66}
do
	touch temp.txt
	touch tempdec.txt
	#uniq -u ./cppg/cppc/cppcommands${i}.txt | sed -r '/^\s*$/d' | grep -v ":" > temp.txt | mv temp.txt ./cppg/cppc/cppcommands${i}.txt

	cat ./cppg/cppc/cppcommands${i}.txt | while read line
	do
		if [[ ${line} != ${lastl} ]]; then
			echo ${line} | grep -v ":" >> temp.txt
		fi
		lastl=$line
		cat temp.txt
		echo "_________________________________"
	done

	mv -f temp.txt ./cppg/cppc/cppcommands${i}.txt
	wait
	sed -r '/^\s*$/d' ./cppg/cppd/cppdescriptions${i}.txt > tempdec.txt | mv tempdec.txt ./cppg/cppd/cppdescriptions${i}.txt
	wait
done

sleep 3

#for i in {1..66}
#do
#	paste -d ": " ./cppg/cppc/cppcommands${i}.txt ./cppg/cppd/cppdescriptions${i}.txt > ./cppg/cppm/cppmerge${i}.txt
#	wait
#done

cd ./cppg/cppm
