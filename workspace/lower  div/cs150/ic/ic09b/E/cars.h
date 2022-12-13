#ifndef CARS_H
#define CARS_H
#include <string>
#include <iostream>

struct Car
{
    string mfg, model;
    double mpg;
};

std::ostream& operator<<(std::ostream& out, const Car& c);

#endif
