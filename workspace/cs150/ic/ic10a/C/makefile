EXE = pointers
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

lint:
	clang++-6.0 --analyze -Xanalyzer -analyzer-output=text $(EXE).cpp

run: $(EXE)
	./$(EXE)

debug: $(EXE)
	debug50 ./$(EXE)
