#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string ASSIGNMENT = "ic15A-A";
string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "aview.h"

/**
 * Run your program's tests
 */
void runTests()
{
	beginTests(); 	///////////// Begin a set of tests

    /////// Tests for //////////////////////
	beginFunctionTest("Aview<int> members"); // function name
	int a_data[100] = {1, 2, 3, 4, 5};
	Aview a{a_data, 10};
	assertEqualsMsg("New Aview. a.size()", 0, a.size());
	assertEqualsMsg("New Aview. a.capacity()", 10, a.capacity());
	a.push_back(1);
	a.push_back(2);
	assertEqualsMsg("push_back 2 elements. a.size()", 2, a.size());
	assertEqualsMsg("a.get(0)", 1, a.get(0));
	assertEqualsMsg("a.get(1)", 2, a.get(1));
	a.set(0, 42);
	assertEqualsMsg("a.set(0, 42). a.get(0)", 42, a.get(0));
	while (a.push_back(3) && a.size() < 20) continue;
	assertEqualsMsg("push_back all elements. a.size()", 10, a.size());

    endFunctionTest(); // end

    /////// Tests for //////////////////////
	beginFunctionTest("Aview<string> members"); // function name
	string b_data[100] = {"peter", "piper", "picked", "a", "peck"};
	Aview b{b_data, 5, 5};
	assertEqualsMsg("Aview b{p, 5, 5}; b.size()", 5, b.size());
	assertEqualsMsg("b.capacity()", 5, b.capacity());
	assertEqualsMsg("b.push_back(\"of\")", false, b.push_back("of"));
	assertEqualsMsg("b.get(0)", "peter", b.get(0));
	assertEqualsMsg("b.get(1)", "piper", b.get(1));
	b.set(4, "bushel");
	assertEqualsMsg("b.set(4, \"bushel\"). b.get(4)", "bushel", b.get(4));

    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();

}

