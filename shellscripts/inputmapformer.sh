i=0
cat ../codetemplates/inputmapformat.txt | while read line
do
      ((i=i+1))
      #for(( j=0; j <=${#cppc[@]};j++ ))
      echo ${line}
      printf "\n"
      printf ' optionStrings["%s"] = %s;\n' ${line} "opt${i}" >> imapreform.txt
#      printf "opt${i}, \n" >> ../enumvals.h
      wait
done
