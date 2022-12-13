#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include "employee.h"
#include <string>
// Put your definition here

class Programmer : public Employee{
public:
    Programmer(const std::string& nm, double sal);
    std::string getName() const;
};

#endif
