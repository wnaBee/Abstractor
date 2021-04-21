#!bin/bash

for i in {1..66}
do
	cat ./cppg/cppf/cppformatted${i}.txt >> ./cppg/cppswitch.cpp
done
