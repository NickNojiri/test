#ifndef CARS_H
#define CARS_H
#include <string>
#include <iostream>

struct Car
{
    std::string mfg, model;
    double mpg;
};

// Prototype the output operator here
std::ostream & operator<< (std::ostream& out , const Car& c);


#endif
