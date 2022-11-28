CXXFLAGS = -g -Wall --std=c++11

main: main.o
	g++ $(CXXFLAGS) -o main main.o

tests: tests.o
	g++ $(CXXFLAGS) -o tests tests.o

main.o: main.cpp MyVector.tcc MyVector.h
tests.o: tests.cpp MyVector.tcc MyVector.h

clean:
	rm -f *.o
