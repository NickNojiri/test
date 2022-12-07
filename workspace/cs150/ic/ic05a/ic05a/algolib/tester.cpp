/**
 *  @author Stephen Gilbert
 *  @date CS 150 Tests for IC04B
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

///////////// Add header for function being tested
#include "algo.h"

//////////// Add your student ID here
string STUDENT = "nnojiri";

void runTests()
{
	srand(time(0));

	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for function //////////////////////
	beginFunctionTest("gcd"); // Test title

    assertEquals(6, aa::gcd(12, 90));
    assertEquals(14, aa::gcd(42, 56));
    assertEquals(14, aa::gcd(56, 42));

    endFunctionTest(); // end

    /////// Tests for function //////////////////////
	beginFunctionTest("sqrt (Newton's Method)"); // Test title
    const double EPSILON = 1.0e-14;
    assertDoubleEquals(2.0, aa::sqrt(4.0), EPSILON);
    assertDoubleEquals(5.0, aa::sqrt(25.0), EPSILON);
    assertDoubleEquals(12.0, aa::sqrt(144.0), EPSILON);

    endFunctionTest(); // end

    /////// Tests for function //////////////////////
	beginFunctionTest("PI approximate"); // Test title
    unsigned n, d;
    assertEquals(52163, (aa::pi(n = 355, d = 113), n));
    assertEquals(16604, (aa::pi(n = 355, d = 113), d));
    
    cerr << fixed << setprecision(14) << endl;
    cerr << " PI->" << acos(-1.0) << endl;
    cerr << "TSU->" << static_cast<double>(355) / 113 << endl;
    cerr << " aa->" << static_cast<double>(n) / d << endl;

    endFunctionTest(); // end

    ///////// End all test runs /////////////////////////
    endTests();
}

//////////// Student tests or run
int run()
{
    // Add code you want to display here
    return 0;
}
