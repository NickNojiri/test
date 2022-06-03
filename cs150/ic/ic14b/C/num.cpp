#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

string ASSIGNMENT = "ic14b-C";
string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "num.h"
std::ostream& operator<<(std::ostream& out, const Num& n){
    out<< n.toString();
    return out;
}
std::istream& operator>>(std::istream& in, Num& n)
{
    int num ;
    in>>num;
    int den =1;
    if(in.peek()=='/')
    {
        in.get();
        in>> den;
        
    }
    n = Num(num,den);
    return in;
}
// Define your input and output operators here
