#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string STUDENT = "nnojiri"; // Your Canvas ID goes here

/**
 * Write the function divisibleBy.
 * Use an iterator loop.
 */

int divisibleBy(const vector<int>& v, int n)
{
    int result =0 ;
    for(auto itr = begin(v); itr != end(v); ++itr){
        if(*itr % n == 0 ) result ++;
    }
    
    return result;

}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}