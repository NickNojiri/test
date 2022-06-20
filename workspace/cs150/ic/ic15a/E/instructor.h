// Define the instructor class here
//extends person.h
#include "person.h"
#include <string>
class Instructor : public Person {
public:
    Instructor()=default;
    Instructor(const std::string nm , const std::string bd,double sal);
    void print() const;
    void setSalary(double amt);
private:
    double m_salary;
};
