CXXFLAGS = -g -Wall --std=c++11

all: main.o MyVector.o

	g++ $(CXXFLAGS) -o main main.o MyVector.o

main: main.o MyVector.o

	g++ $(CXXFLAGS) -o main main.o MyVector.o

tests: tests.o MyVector.o

	g++ $(CXXFLAGS) -o tests tests.o MyVector.o


main.o: main.cpp
MyVector.o: MyVector.tcc MyVector.h
tests.o: tests.cpp doctest.h

clean:
	rm -f *.o
