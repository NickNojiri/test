/**
 *  @author Stephen Gilbert
 *  @date CS 150 Testing Template
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

#include "cs150check.h"
#include "ex.h"
///////////// Add header for function being tested

//////////// Add your student ID here
string STUDENT = "nnojiri";
const double kEps = 1.0e-14;
void runTests()
{
	srand(time(0));

	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for function //////////////////////
	beginFunctionTest("max"); // Test title
    assertDoubleEquals(1.11, ex::max(1.1,1.11,1.00), kEps); // double
    assertDoubleEquals(1.11 , ex::max (1.1,1.09,1.11),kEps); // double
    assertDoubleEquals(1.11, ex::max(1.11,1.11,1.09),kEps); // double
    endFunctionTest();
     //assertEquals(1.11), ex:max(1.1,1.11,1.00), kEps)// int & string
     
    beginFunctionTest("min"); // Test title
    assertDoubleEquals(1.09, ex::min(1.1,1.11,1.00), kEps); // double
    assertDoubleEquals(1.09 ,ex::min(1.1,1.09,1.11),kEps); // double
    assertDoubleEquals(1.09, ex::min(1.11,1.11,1.09),kEps); // double
   //  assertEquals(expected ((call procedure), actual));


    ///////// End all test runs /////////////////////////
    endTests();
}

//////////// Student tests or run
int run()
{
    // Add code you want to display here
    return 0;
}