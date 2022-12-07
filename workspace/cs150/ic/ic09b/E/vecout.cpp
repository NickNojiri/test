/**
    CS 150 - Vector output operators
    @author Stephen Gilbert
    @date Fall 2021
*/
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

#include "cs150check.h"
#include "cars.h"
#include "vecout.h"     // Add your template function here
extern const vector<Car> vCars;
string to_string(const vector<Car>&);

string STUDENT = "nnojir"; // Add your Canvas id here.

// DON'T CHANGE ANY CODE BELOW
void runTests()
{
    srand(time(0));

  	///////////// Begin a set of tests
  	beginTests(); // test heading

  	beginFunctionTest("vector<T> output operator"); // function name

  	// Create some vectors
  	vector<Car> v1;
  	vector<Car> v2(2);
  	vector<Car> v3(3);
  	vector<Car> v4(3);
  	vector<Car> v5(2);

  	const auto SIZE = vCars.size();
  	for (size_t i = 0; i < 5; i++)
  	{
  	    if (i < v2.size()) v2[i] = vCars[rand() % SIZE];
  	    if (i < v3.size()) v3[i] = vCars[rand() % SIZE];
  	    if (i < v4.size()) v4[i] = vCars[rand() % SIZE];
  	    if (i < v5.size()) v5[i] = vCars[rand() % SIZE];
  	}

    ostringstream out;
    string output;
  	// Now test the output operator
  	out << v1; output = out.str(); out.str("");
    assertEquals(to_string(v1), output);

  	out << v2; output = out.str(); out.str("");
    assertEquals(to_string(v2), output);

  	out << v3; output = out.str(); out.str("");
    assertEquals(to_string(v3), output);

  	out << v4; output = out.str(); out.str("");
    assertEquals(to_string(v4), output);

  	out << v5; output = out.str(); out.str("");
    assertEquals(to_string(v5), output);

    endFunctionTest(); // end

    endTests();
}

