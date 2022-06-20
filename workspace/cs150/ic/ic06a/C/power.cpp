#include <string>
std::string ASSIGNMENT = "ic06a-ex3b";
/**
    Write the function power.

    Given n and exp that are both 1 or more,
    compute recursively (no loops) the value
    of n to the exp power, so power(3, 2)
    is 9 (3 to the 2nd power or 3 squared).

        power(3, 1) returns 3
        power(3, 2) returns 9
        power(3, 3) returns 27
*/
///////// ADD YOUR CODE HERE /////////////
std::string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

int power(int n, int exponent){
    if(exponent )return  n * power(n,exponent -1);
    return 1;
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
