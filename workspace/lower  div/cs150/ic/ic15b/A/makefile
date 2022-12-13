EXE = polymorphism
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
SRC = billfold.cpp cards.cpp client.cpp
OBJS = billfold.o cards.o client.o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

run: $(EXE)
	@./$(EXE)

grind: $(EXE)
	@ valgrind ./$(EXE)

check: $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -fsanitize=address -o $(EXE) $(OBJS)
	@ASAN_OPTIONS=symbolize=1 ASAN_SYMBOLIZER_PATH=/usr/lib/llvm-6.0/bin/llvm-symbolizer ./$(EXE)

