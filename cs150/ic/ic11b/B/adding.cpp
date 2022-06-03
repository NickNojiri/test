/**
 *  @file adding.cpp
 *  @author your name
 *  @version section and date
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.

/**
 *  Write the function named sum13().
 *
 *  Add the numbers in the array. Except, the number 13
 *  and the number immediately following doesn't count.
 *
 *  @param numbers an array of int.
 *  @param len the size of the array
 *  @return the sum of numbers less 13 as described above.
 */
 int sum13(const int * numbers, size_t len){
     int sum = 0 ;
     for(size_t i = 0; i <= len ; i++){
         if( numbers[i] != 13 ){ sum+= numbers[i];}
         else{
             ++i;}
         
     }
     return sum;
     
 }
 



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
