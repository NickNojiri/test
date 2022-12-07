EXE = InsideOut
CXX = @clang++
CXXFLAGS = -ggdb3 -O0 -std=c++11 -Wall -Wextra -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

test: $(EXE)
	@./$(EXE) test

run: $(EXE)
	@./$(EXE)
