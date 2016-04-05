make A
g++ -o A A.o
g++ -c A.cpp

result:
size=1000
sort():0 seconds
v1/v2 are different.
insertion_sort(): 0.01 seconds
v1/v2 are the same.

size=10000
sort():0 seconds
v1/v2 are different.
insertion_sort(): 1.28 seconds
v1/v2 are the same.

size=100000
sort():0.04 seconds
v1/v2 are different.
insertion_sort(): 128.1 seconds
v1/v2 are the same.

size=1000000


The bigger size is, the more difference between the two method.
