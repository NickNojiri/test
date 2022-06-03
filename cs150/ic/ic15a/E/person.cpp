#include <string>
#include <iostream>
using namespace std;
#include "person.h"

Person::Person(const string& n, const string& b)
    : name(n), birthday(b) { }

void Person::setName(const string& personName)
{
    name = personName;
}

void Person::setBirthday(const string& date)
{
    birthday = date;
}

void Person::print() const
{
    cout << "Name: " << name << ", ";
    cout << "Birthday: " << birthday << endl;
}

