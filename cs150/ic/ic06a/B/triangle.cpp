#include <string>
std::string ASSIGNMENT = "ic06a-ex3a";
/**
    Write the recursive function triangle.

    We have pyramid made of blocks.
    The topmost row has 1 block, row beneath that
    has 2 blocks, the next row has 3 blocks,
    and so on. Compute recursively
    (no loops or multiplication) the total number
    of blocks in such a triangle with the given
    number of rows. Notice that if there are no
    blocks, your function should return 0.

        triangle(0) returns 0
        triangle(1) returns 1
        triangle(2) returns 3
*/
///////// ADD YOUR CODE HERE
std::string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

int triangle(int base){
    if(base ==0 )return 0;
    return base+triangle(base-1);
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
