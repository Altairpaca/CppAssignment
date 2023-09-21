CC := g++

SRC := $(wildcard *.cpp)
OBJ := $(patsubst %.cpp,%.o,${SRC})
EXE := determine_base

${EXE}:${OBj}

${OBJ}:%.o:%.cpp
	CC -c $< -o $@ -std=c++20 -O2
	rm -f ${OBJ}

.PHONY:clean

clean:
	rm -f ${EXE} ${OBJ}