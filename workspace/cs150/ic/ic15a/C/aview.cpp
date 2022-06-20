#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string ASSIGNMENT = "ic15A-C";
string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "aview.h"


/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading
    /////// Tests for //////////////////////
	beginFunctionTest("Aview<double> operator+=, []"); // function name
	double a_data[100] = {1.5, 2.5, 3.5, 4.5, 5.5};
	Aview a{a_data, 10};
	cerr <<  "  --Aview a{{1.5, 2.5, 3.5, 4.5, 5.5}, 10, 0}--------" << endl;
	assertEqualsMsg("a.size()", 0, a.size());
	assertEqualsMsg("a.capacity()", 10, a.capacity());
	a += 3.5;
	assertEqualsMsg("a += 3.5; a[0]", 3.5, a[0]);
	a += 9.2;
	assertEqualsMsg("a += 9.2; a[1]", 9.2, a[1]);
	assertEqualsMsg("a.size()", 2, a.size());

	try { a[2];
		failMsg("a[2] SHOULD throw exception");
	} catch (out_of_range& e) {
		passMsg(string("a[2] throws exception: ") + e.what());
	} catch (...) {
		failMsg("a[2] throws WRONG exception.");
	}

	a[1] = 9.7;
	assertEqualsMsg("a[1] = 9.7; a[1]", 9.7, a[1]);

	try { a[2] = 15;
		failMsg("a[2] = 15 SHOULD throw exception");
	} catch (out_of_range& e) {
		passMsg(string("a[2] = 15 throws exception: ") + e.what());
	} catch (...) {
		failMsg("a[2] = 15 throws WRONG exception.");
	}
    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();
}
