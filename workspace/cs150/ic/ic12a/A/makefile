EXE = search
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3  -finstrument-functions -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o


t1: $(EXE)
	@./$(EXE) t1

t2: $(EXE)
	@./$(EXE) t2

t3: $(EXE)
	@./$(EXE) t3

run: $(EXE)
	./$(EXE)
