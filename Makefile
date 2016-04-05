A: A.o
	g++ -o A A.o
A.o: A.cpp
	g++ -c A.cpp
Sort: Clock.o main.o
	g++ -o Sort Clock.o main.o
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
main.o: main.cpp Clock.h
	g++ -c main.cpp
clean:
	rm A *.o
