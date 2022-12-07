// Implement instructor here
#include "instructor.h"
#include <iostream>
using namespace std;

Instructor::Instructor(const std::string nm , const std::string bd , double sal)
    : Person(nm , bd ), m_salary{sal} {}
    
void Instructor::setSalary(double amt) { m_salary = amt; }//sets the amt with the member_salary-> double amt;
void Instructor::print() const
{
    Person::print();
    cout << "    Instructor: Salary $"<< endl;
}//displays