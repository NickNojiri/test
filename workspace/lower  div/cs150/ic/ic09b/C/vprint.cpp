/**
    CS 150 - Practice with vectors.
    @author Stephen Gilbert
    @date Fall 2021
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "vprint.h"
#include "cs150check.h"

string STUDENT = "nnojiri"; // Add your Canvas id here.

void runTests()
{

    // Write the print function [1, 2, 3, 4]
    // Write ONLY one print function
    // Each vector should be able to be printed using this code.
    // print(cout, v1);

  	beginFunctionTest("The generic print function");
  	ostringstream sout; print(sout, v1);
  	assertEqualsMsg("v1 printed correctly", "[0, 1, 1, 2, 3]", sout.str());
  	sout.str(""); print(sout, v2);
  	assertEqualsMsg("v2 printed correctly", "[5, 8, 13, 21, 34]", sout.str());
  	sout.str(""); print(sout, v3);
  	assertEqualsMsg("v3 printed correctly", "[55, 89, 144, 233, 377]", sout.str());
  	sout.str(""); print(sout, v4);
  	assertEqualsMsg("v4 printed correctly", "[610, 987, 1597, 2584, 4181]", sout.str());
  	sout.str(""); print(sout, v5);
  	assertEqualsMsg("v5 printed correctly", "[6765, 10946, 17711, 28657, 46368]", sout.str());
    endFunctionTest(); // end

    endTests();

}

