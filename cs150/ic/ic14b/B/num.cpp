#include <string>
#include <stdexcept>
using namespace std;

string ASSIGNMENT = "ic14b-B";
string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "num.h"

// Implement your operator+ here
const Num operator+(const Num& lhs , const Num& rhs)
{
    Num result(lhs);
    return result += rhs;//left hand side is const
}
// Implement your conversion constructor here
Num::Num(int n){
    m_num = n ;
    m_den = 1;
}