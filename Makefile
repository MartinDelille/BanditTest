CXX=clang++
CXXFLAGS=-g -std=c++11 -Wall -pedantic
INC= -Ibandit
BIN=test

default: main

main: main.cpp
	$(CXX) $(INC) $(CXXFLAGS) main.cpp -o $(BIN)

clean:
	rm *.o $(BIN)

test: main
	./$(BIN)

