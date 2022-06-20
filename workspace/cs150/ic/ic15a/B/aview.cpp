#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string ASSIGNMENT = "ic15A-B";
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
	beginFunctionTest("Aview<double> safe access"); // function name
	double a_data[100] = {1.5, 2.5, 3.5, 4.5, 5.5};
	Aview a{a_data, 10, 5};
	cerr <<  "  --Aview({1.5, 2.5, 3.5, 4.5, 5.5}, 10, 5)--------" << endl;
	assertEqualsMsg("a.get(0)", 1.5, a.get(0));
	assertEqualsMsg("a.get(4)", 5.5, a.get(4));
	a.set(4, 4.5);
	assertEqualsMsg("a.set(4, 4.5); a.get(4)", 4.5, a.get(4));
	try { a.get(5);
		failMsg("a.get(5) SHOULD throw exception");
	} catch (out_of_range& e) {
		passMsg(string("a.get(5) throws exception: ") + e.what());
	} catch (...) {
		failMsg("a.get(5) throws WRONG exception.");
	}

	try { a.set(5, 0);
		failMsg("a.set(5, 0) SHOULD throw exception");
	} catch (out_of_range& e) {
		passMsg(string("a.set(5, 0) throws exception: ") + e.what());
	} catch (...) {
		failMsg("a.set(5, 0) throws WRONG exception.");
	}
    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();
}
