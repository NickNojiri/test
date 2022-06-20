#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string STUDENT = "nnojiri"; // Your Canvas ID goes here

/**
 * Write the function divisibleBy.
 * Use an appropriate STL algorithm
 */

int divisibleBy(const vector<int>& v, int n)
{
    return count_if( begin(v),end(v),
        [n](int e ) {return e % n == 0; });
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}