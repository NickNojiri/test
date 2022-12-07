/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID


#include "h17.h"

// Implement the function here
vector<string> fileToWords(const string& filename)
{
    ifstream in(filename);
    if(in.fail()) throw invalid_argument("Incorrect filename");
    vector<string> result;
    string ln ; 
    while(getline(in, ln ))
    {
        result.push_back(ln);
    }
    return result;
}




/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}