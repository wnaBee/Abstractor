cat ../inputmapformat.txt | while read line
do
      #for(( j=0; j <=${#cppc[@]};j++ ))
      echo ${line}
      printf "\n"
      printf '{ "%s", %s },\n' ${line} ${line} >> inputmapformatted.txt
      wait
done
