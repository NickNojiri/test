/**
 *  CS 150 - Pointer and a function
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Write a function that takes a pointer
// to int as its only parameter. Inside the
// function, fill the pointer's indirect
// value with a random number.
void func(int *p ){
    *p = rand();
    
}

int main()
{
    srand(static_cast<unsigned>(time(0)));

    // Create and initialize an int variable
    // Print the value in your variable
    int x  = 42;
    cout<<"Before \n" << x << endl;
    func(&x);
    cout<< x <<"\nafter"<< endl;
    // Pass its address to the function
    // Print the value in the variable again.

    return 0;
}








