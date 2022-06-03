EXE = ex-tester
OBJS  = client.o ex.o cs150check.o

$(EXE) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE)
	
test : $(EXE)
	./$(EXE) -t
	
run: $(EXE)
	./$(EXE)