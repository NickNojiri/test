// Define Student here
//enxtends person.h
#include "person.h"
#include <string>
class Student : public Person
{
public:
    Student() = default;
    Student(const std::string& n, const std::string b, const std::string& m);
    void setMajor(const std::string& m_major);
    void print() const;
private:
    std::string m_major;
};