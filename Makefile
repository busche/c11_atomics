CXX=g++
#CXXFLAGS=-g -std=c++11 -Wall -pedantic
CXXFLAGS=-g -std=c++0x -Wall -pedantic

BIN=prog

SRC=$(wildcard src/*.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CXX) -o $(BIN) $^

%.o: %.c
	$(CXX) $@ -c $<

clean:
	rm -f *.o
	rm $(BIN)

