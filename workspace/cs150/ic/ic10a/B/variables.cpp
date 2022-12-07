/**
 *  CS 150 - Pointers, addresses, and so on exercises.
 */
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

const double PI = 3.1459;

int main()
{
    // Create some variables
    int n = 37;
    string name = "Steve";
    Employee waiter = {"Bob", 23000.0};

    // Print the variables
    cout << "n = " << n << endl;
    cout << "PI = " << PI << endl;
    cout << "name = " << name << endl;
    cout << "waiter = " << waiter << endl;

    // EXERCISE 1: print address and size of each
    // n lives at xxxx and uses xx bytes
    cout << "n lives at " << &n << "amd uses "<<sizeof(n)<<" bytes"<<endl;
    cout << "PI lives at " << &PI <<"amd uses "<<sizeof(PI)<<" bytes"<<endl;
    cout << "name lives at " << &name << "amd uses "<<sizeof(name)<<" bytes"<<endl;
    cout << "waiter lives at " << &waiter << "amd uses "<<sizeof(waiter)<<" bytes"<<endl;

    // EXERCISE 2: create pointer to each variable
    
    int *ip = &n;
    const double *dp = &PI;
    string *sp = &name;
    Employee *e= &waiter;
    

    // EXERCISE 3: print pointers' address, direct and indirect value
    // 
    cout << "ip contains "<<ip
    <<", is stored at "<<&ip
    <<", and points to "<< *ip
    << "." 
    <<endl;
    
    cout << "ip contains "<< dp
    <<", is stored at "<< &dp
    <<", and points to "<< *dp
    << "." 
    <<endl;
    
    cout << "ip contains "<< sp
    <<", is stored at "<< &sp
    <<", and points to "<< *sp
    << "." 
    <<endl;
    
    cout << "ip contains "<<e
    <<", is stored at "<< &e
    <<", and points to "<< *e
    << "." 
    <<endl;

    return 0;
}
