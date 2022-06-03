
/**
 * Basic unit tests for CS 150
 * @author Steve G.
 * @version Fall 2018
 * This is the implementation file.
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#include "cs150check.h"

/**
 * Global variables for scoring points.
 */
int possible = 0;
int fail = 0;
static const string UNDERLINE(70,'-');

static int allPossible = 0;
static int allFail = 0;

void _failReportDifference(const string& msg, double expected, double actual, double tolerance)
{
	ios::fmtflags f(cerr.flags());
	cerr.setf(ios::fixed);
	cerr.precision(9);
	cerr << "   X " << msg << ": expected [" << expected;;
	cerr << "] actual [" << actual;
	cerr << "] tolerance [" << scientific << setprecision(1) << tolerance;
	cerr << "]" << endl;
	cerr.flags(f);
	fail++;
}

void _successReport(const string& msg)
{
    cerr << "   + " << msg << endl;
}

void _failReport(const string& msg, int points)
{
	cerr << "   X " << msg << endl;
	fail += points;
}

void failMsg(const string& msg, int points)
{
    possible += points;
    _failReport(msg, points);
}

void passMsg(const string& msg) {
    possible++;
    _successReport(msg);
}

//////////// OVERLOADED VERSION OF ASSERT_EQUALS ///////////////////////
void _assertEquals(const string& msg, const string& expected, const string& actual)
{
    possible++;
    if (expected != actual)
    {
    	_failReportEquals(msg, expected, actual);
    }
    else
    	_successReport(msg + "->" + actual);
}

void _assertEquals(const string& msg, int expected, int actual)
{
    possible++;
    if (expected != actual)
    {
    	_failReportEquals(msg, expected, actual);
    }
    else
    	_successReport(msg + "->" + to_string(actual));
}

void _assertEquals(const string&, double, double)
{
	cerr << "XXX DO NOT USE assertEquals(double, double)" << endl;
	cerr << "      USE assertDoubleEquals(double expect, double actual, double tolerance) instead." << endl;
}

void _assertEquals(const string& msg, double expected, double actual, double tolerance)
{
    possible++;
    double diff = abs(actual - expected);
    if (diff <= tolerance)
    {
    	_successReport(msg);
    }
    else
    {
        _failReportDifference(msg, expected, actual, tolerance);
    }
}

void _assertTrue(bool cond, const string& msg)
{
    possible++;
    if (!cond)
    {
    	_failReport(msg + " should be true, but is false.");
    }
    else
    	_successReport(msg);
}

void _assertFalse(bool cond, const string& msg)
{
    possible++;
    if (cond)
    {
    	_failReport(msg + " should be false, but is true.");
    }
    else
    	_successReport(msg);
}

void beginTests()
{
    cerr << "TESTING " << ASSIGNMENT << "--" << STUDENT << endl;
    cerr << UNDERLINE << endl;
    allPossible = allFail = 0;
}

void beginFunctionTest(const string& functionName)
{
	possible = fail = 0;
    cerr << "Checking: " << functionName << " -------------------" << endl;
}

void endFunctionTest()
{
    cerr << UNDERLINE << endl << "  Tests passing "
        << (possible - fail) << "/" << possible
        << " ("
        << fixed << setprecision(0)
        << (static_cast<double>(possible - fail) / possible) * 100.0
        << "%)." << endl << endl;

    allPossible += possible;
    allFail += fail;
}

void endTests()
{
	double percent = allPossible ? (static_cast<double>(allPossible - allFail) / allPossible) * 100.0 : 0.0;
    cerr << UNDERLINE << endl << ASSIGNMENT << ":" << STUDENT << ":ALL TESTS -- PASS "
        << (allPossible - allFail) << "/" << allPossible
        << " ("
        << fixed << setprecision(0)
        << percent
        << "%)." << endl << UNDERLINE << endl;
    ostringstream out;
    out << fixed << setprecision(2) << static_cast<unsigned>(time(0))
            << ":" << STUDENT << ":" << ASSIGNMENT << ":" << percent << "%";
}

//// Code from cs150io.hxx
void replaceAll(string& str, const std::string& from, const std::string& to)
{
    if(from.empty()) return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}
int run();

int ARGC = 0;
char ** ARGV = 0;

/**
 * Main file for all testing and regular running.
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char * argv[])
{
	ARGC = argc;
	ARGV = argv;

	if (argc == 2 && strcmp(argv[1], "-t") == 0)
	{
	    runTests();
	    return 0;
	}
	else
	{
		return run();
	}
}

string TESTFILE = "";
string ASSIGNMENT = "";