#!/bin/bash

#fetch commands
#curl -s http://www.cplusplus.com/reference/algorithm/ | grep -v '<br>' | grep -oP '(?<=<b>).*?(?=</b>)' | sed 's/<.*>//gp' > testcommands.txt

#fetch descriptions
#curl -s http://www.cplusplus.com/reference/algorithm/ | grep -oP '(?<=<dd>).*?(?=<span)'

#webcrawl
#curl -s http://www.cplusplus.com/reference/ | grep -oP '(?<=<a href= ").*?(?=">)'

childs=$(curl -s http://www.cplusplus.com/reference/ | grep -oP '(?<=<a href= ").*?(?=">)')
i=0
for url in $childs
do
    ((i=i+1)) 
    #curl -s http://www.cplusplus.com${url} | grep -v '<br>' | grep -oP '(?<=<b>).*?(?=</b>)' | sed 's/<.*>//gp' > ./cppg/cppc/cppcommands${i}.txt
    curl -s http://www.cplusplus.com${url} | grep -v '<br>' | grep -oP '(?<=<dd>).*?(?=<span)' | sed 's/<.*>//gp'> ./cppg/cppd/cppdescriptions${i}.txt
    cat ./cppg/cppd/cppdescriptions${i}.txt
    echo "_____________________________"
done
