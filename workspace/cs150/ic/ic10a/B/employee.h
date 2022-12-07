#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <iomanip>
struct Employee  {
   std::string name;
   double salary;
};

std::ostream& operator<<(std::ostream& out, const Employee& e)
{
    out << std::fixed << std::setprecision(2);
    out << e.name << ": $ " << e.salary;
    return out;
}

#endif