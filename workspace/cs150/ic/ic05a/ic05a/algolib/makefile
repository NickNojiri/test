# Your makefile will go here
CXX = @g++
EXE = algo-tester
OBJS = algo.o cs150check.o tester.o

$(EXE) : $(OBJS) makefile
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE)
	
test: $(EXE)
	./$(EXE) -t