EXE = starcat
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)  -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

lint:
	clang++ --analyze -Xanalyzer -analyzer-output=text $(EXE).cpp

run: $(EXE)
	./$(EXE)

debug: $(EXE)
	debug50 ./$(EXE)

stest: $(EXE)
	@./$(EXE) $(EXE).tests

test: $(EXE)
	@./$(EXE) -t
