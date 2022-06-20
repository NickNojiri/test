/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h29.cpp
 */
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h29.h"

// Implement your class here
Employee::Employee():m_salary(0){}//default set sal to 0
Employee::Employee(const std::string& name, double salary)
    : m_data(name,0),m_salary(salary){}
void Employee::salary(double newSalary){
    m_salary= newSalary;//double = double
}
double Employee::salary() const{return m_salary;}
string Employee::name() const{return m_data.name();}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <iomanip>
int run()
{
    cout << "Add your own tests here" << endl;
    // Employee jeff{"Jeff Bezos", 2.347e9};
    // cout << "jeff->" << jeff.name() << ", $ "
    //     << fixed << setprecision(2) << jeff.salary() << endl;
    // // Change his salary
    // jeff.salary(jeff.salary() / 1.5);
    // cout << "jeff->" << jeff.name() << ", $ "
    //     << fixed << setprecision(2) << jeff.salary() << endl;

    return 0;
}