/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h23.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here

int alternatingSum(const int a[], size_t size)
{
    int result =0;
    for(size_t i = 0 ; i< size ; i++ ){
        if( i % 2 == 0 ){result += a[i];}// adds the the even elements
        else{result -= a[i]; } // literally is subtraction
    }
    return result; // and pressto my cake is finished
}
// Returns pointers to the extreme values in the array.
MinMax minMax(const double *ptr, size_t size)
{
    MinMax result; 
    result.min = ptr; //using the the dot operand we can access the min value witch has the value nullptr as its referece
    result.max = ptr; //this is a nonvalid address in c
    
    const double *end = ptr + size;
    if(size==0){// incase of empty set if it is empty null ptr is not a valid value
        result.min = 0; result.max =0;
        return result;
        
    }//sets and return zero END OF IF
    while(ptr < end )// while the ptr is not at the end of the values in ptr we conti
    {
        if(*ptr> *result.max)// compears the numbers in the address
        {
            result.max= ptr;
        }
        else if(*ptr < *result.min){
            result.min = ptr;
            
        }
        ptr++; //itr loop
    }// loop exit
    return result;
    
}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}