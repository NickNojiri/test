#include <string>
#include <stdexcept>
using namespace std;

string ASSIGNMENT = "ic14b-A";
string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "num.h"

// Implement your operator here
/*
 * Implementation notes for all arithmetic.
 * 1. Get the 4 parts a, b, c, and d
 * 	  a->numerator, b->denominator,
 *    c->rhs.numerator, d->rhs.denominator
 * 2. Construct a new Num number using
 *    math calculations with a, b, c, d for numerator
 *    and denominator.
 * 3. Return the result
 */
// ad + bc / bd


Num& Num::operator+=(const Num& rhs)
{//* this
    int a= m_num;
    int b = m_den;
    int c = rhs.m_num;
    int d = rhs.m_den;
    *this = Num(a*d + b *c,b*d);
    
    return *this;
}


