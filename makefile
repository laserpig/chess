main: main.o board.o
	g++ main.o board.o -g -Wall -std=c++11 -o main

main.o: main.cpp
	g++ main.cpp -g -Wall -std=c++11 -c main.cpp

board.o: board.h pieces.h square.h board.cpp
	g++ board.cpp -g -Wall -std=c++11 -c board.cpp

clean:
	rm *.o main test