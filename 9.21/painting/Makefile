CC = g++

SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))
EXE = painting

$(EXE):$(OBJ)
	$(CC) $^ -o $@

$(OBJ):%.o:%.cpp
	$(CC) -c $< -o $@ -std=c++2a -O2

.PHONY:clean

clean:
	rm -f $(EXE) $(OBJ)
