#include <iostream>
#include <sstream>
#include <string>
#include "Functions.h"
using namespace::std;

class Functions
{
public:
double mean(double* p)const{
   double sum = 0;
   int count=0;
    while(*p){
       sum += *p;
       *p++;
       count++;
    }
    return sum/count;
}
double sigma(double*p)const;//using the mean fuction we can find (xi - xbar)/(n-1)
double var(double * p)const;// we can do sigma^2
double chiSquared(double*p, double *e);// yeah i am kinda smart ig
double quartiles(double*p); //ittr loop
double mode(double* p);// tbh u just count the highest frequency this one is kinda intim but remeber how recusition works to check and branch or just use a [i+j]a

};


int main()
{
   Functions a;
   double b[10]={1,2,3,4,5,6};
   double *p = b;
   cout<< a.mean(p);
}