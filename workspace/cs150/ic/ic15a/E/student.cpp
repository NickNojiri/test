// Implement Student here

#include "student.h"
#include <string>
#include <iostream>
using namespace std;
Student::Student(const std::string& n, const std::string b, const std::string& m)
        :Person(n,b),m_major(m) {}
    void Student::setMajor(const std::string& m){
         m_major=m;
    }
    void Student::print() const{
        Person::print();
        cout<< "Student: ->" <<m_major << endl;
    }