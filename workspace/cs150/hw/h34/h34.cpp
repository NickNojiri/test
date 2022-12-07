/**
    @file h34.cpp
    @author nikkie nojiri
    @version what tus/thurs 2:20
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h34.h"

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const std::string& name, double rate): name(name), rate(rate)
{
    
}
// Add remaining members here . . .
Worker::~Worker() {}
double Worker::getRate()const
{
    return rate;
}
std::string Worker::getName()const
{
    return name;
}

SalariedWorker::SalariedWorker(const std::string& name, double rate)
: Worker(name , rate )
{
    //empty for this explcit constructor
}

std::string SalariedWorker::payInfo(int hr)const
{
    ostringstream out;
    out << fixed 
    << setprecision(2);
    double mon = 40* getRate();
    out << getName() 
    << "(Salaried, $ "
    << getRate()
    <<") worked "
    << hr
    << " hours. Pay: $ "
    << mon;
    return out.str();   
}
HourlyWorker::HourlyWorker(const std::string& name, double rate) : Worker(name,rate){}

std::string HourlyWorker::payInfo(int hr)const
{
    ostringstream out;
    double mon;
    out << fixed 
    << setprecision(2);
   if(hr>=40) { mon = (40* getRate())+(hr-40)*(getRate()*1.5);}//WOOOOOOH OVERTIME
   else{ mon = hr*getRate() ;}
    out << getName() 
    << "(Hourly, $ "
    << getRate()
    <<") worked "
    << hr
    << " hours. Pay: $ "
    << mon;
    return out.str();       
}
/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
