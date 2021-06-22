#!/bin/bash

i=0
cat ~/tools/homebrewn/filereader_src/src/pythoncode/pythonlinks.txt | while read line
do
	((i=i+1))
	echo -ne "link: ${i}/242 ${line}\n"

	page=$(curl -s https://www.w3schools.com/python/${line})
	for j in {1..181}
	do
		kw=$(sed -n "${j}p" ./emptyfuncstemp.txt)
		#curl -s https://www.w3schools.com/python/${line} | grep -oP '(?<=<code class="w3-codespan">).*?(?=</code)' >> pythoncommands.txt
		echo $page | grep -oP "(?<=<code class=\"w3-codespan\">)${kw}?(?=</code).{0,50}" >> temp.txt
		echo -ne "\r function: ${j}/181"
	done
	echo -e "\n"
done

#uniq pythoncommands.tx
