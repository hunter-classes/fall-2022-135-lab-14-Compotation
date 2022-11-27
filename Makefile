CXXFLAGS = -g -Wall --std=c++11

all: main.o

	g++ $(CXXFLAGS) -o main main.o

main: main.o

	g++ $(CXXFLAGS) -o main main.o

tests: tests.o

	g++ $(CXXFLAGS) -o tests tests.o


main.o: main.cpp
tests.o: tests.cpp

clean:
	rm -f *.o
