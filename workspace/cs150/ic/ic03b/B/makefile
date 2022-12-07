EXE = Count
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

test: $(EXE)
	@./$(EXE) test

run: $(EXE)
	@./$(EXE)
