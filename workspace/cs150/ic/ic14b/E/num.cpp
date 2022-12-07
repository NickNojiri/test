#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

string ASSIGNMENT = "ic14b-E";
string STUDENT = "NojiriMODe"; // Add your Canvas id here.

#include "num.h"

// Implement your operators here
    Num& Num::operator++(){
        *this = Num(m_num+m_den,m_den);
        return *this;
    }
    Num Num::operator++(int){
        Num result(*this);
        *this = Num(m_num+m_den,m_den);
        return result;
    }