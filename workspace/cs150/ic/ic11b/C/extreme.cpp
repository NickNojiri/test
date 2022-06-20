/**
 *  @file extreme.cpp
 *  @author your name
 *  @version section and date
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "Who are you?"; // Add your Canvas id here.

/**
    Write the function bigDiff().
    Returns the difference between the smallest and
    largest elements in numbers.

    @param numbers an array of int. (not modified)
    @param len the number of elements in the array.
    @return difference between largest and smallest.
*/
int bigDiff(const int number[], size_t len){
    int smallest = number[0] , largest = smallest;
    for(size_t i = 1; i < len ; i++){
        if (number[i]> largest ) largest = number[i];
        else if (number[i]<smallest) smallest = number[i];
        
    }
    return largest -smallest;
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
