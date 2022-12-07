#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
class Employee
{
public:
    Employee();
    Employee(const std::string& n, double s); // name, salary
    virtual ~Employee() = default;

    double getSalary() const;
    virtual std::string getName() const;    // may be overridden

    void setSalary(double s);
private:
    std::string name;
    double salary;
};
const std::string url = "https://ide.cs50.io/70ad63e311e34c609b2d3f63a5ed24d1";
#endif
