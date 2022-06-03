#include <iostream>
using namespace std;

int main()
{
    // A global array of char pointers: char ** environ
    // Use it to print all of the environmental variables
    // Result should be same as Linux command printenv
    extern char** environ;
    
    char ** p = environ; 
    while(*p != nullptr){
        
        cout << *p << endl; 
        p++;
        
        }
}