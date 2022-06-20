#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

string ASSIGNMENT = "ic14b-D";
string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "num.h"

// Implement your operators here

bool operator<(const Num& lhs, const Num& rhs){
    return lhs.m_num * rhs.m_den< rhs.m_num *lhs.m_den;
}

bool operator==(const Num& lhs, const Num& rhs){
    return lhs.m_num == rhs.m_num && lhs.m_den == rhs.m_den;
}

bool operator!=(const Num& lhs, const Num& rhs){
    return !(lhs == rhs);
}
