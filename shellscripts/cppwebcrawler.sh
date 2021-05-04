#!/bin/bash

#fetch commands
#curl -s http://www.cplusplus.com/reference/algorithm/ | grep -v '<br>' | grep -oP '(?<=<b>).*?(?=</b>)' | sed 's/<.*>//gp' > testcommands.txt

#fetch descriptions
#curl -s http://www.cplusplus.com/reference/algorithm/ | grep -oP '(?<=<dd>).*?(?=<span)'

#webcrawl
#curl -s http://www.cplusplus.com/reference/ | grep -oP '(?<=<a href= ").*?(?=">)'

#childs=$(curl -s http://www.cplusplus.com/reference/ | grep -oP '(?<=<a href= ").*?(?=">)')
wait
i=66
#for url in $childs
cat ./additionallinks.txt | while read url
do
    ((i=i+1))
    echo $url
   # curl -s http://www.cplusplus.com${url} | grep -v '<br>' | grep -oP '(?<=<b>).*?(?=</b>)' | sed 's/<.*>//gp' > ./cppg/cppc/cppcommands${i}.txt
    wait
    curl -s http://www.cplusplus.com${url} | grep -v '<br>' | grep -oP '(?<=<dd>).*?(?=<span)' | sed 's/<.*>//gp'> ./cppg/cppd/cppdescriptions${i}.txt
    wait
    #cat ./cppg/cppd/cppdescriptions${i}.txt
    echo "_____________________________"
done

