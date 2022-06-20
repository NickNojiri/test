/**
 *  @file h31.cpp
 *  @author Put your name here
 *  @version Put the semester and meeting time here
 */
#include <string>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h31.h"

// Implement your class members here
static int gcd(int x ,int y){
    int r = x % y ;
    while(r){//not zero!
        x=y;
        y=r;
        r= x % y;
    }
    return y;
}
//Fraction() = default;
Fraction::Fraction(int n) : Fraction(n, 1) {}//explicit
Fraction::Fraction(int n, int d){
    if(d== 0){throw invalid_argument("Divison by zero error");}
    if(n==0){m_numerator = 0; m_denominator = 1;}
    else
    {
        int g = gcd(abs(n),abs(d));
        m_numerator= n/g;
        m_denominator = abs(d)/g;
        if(d<0){(m_numerator = m_numerator *-1);}
    }
}
// overriding operators class& class ::[type of overload]operator ++(const class& rhs)  so  rhs& ++object *this is implici
Fraction& Fraction::operator+=(const Fraction& rhs){
    int a = m_numerator, b = m_denominator, c = rhs.m_numerator, d = rhs.m_denominator;
    *this = Fraction(a * d + b * c, b*d);
    return *this;
}
Fraction& Fraction::operator-=(const Fraction& rhs){
    int a = m_numerator, b = m_denominator, c = rhs.m_numerator, d = rhs.m_denominator;
    *this = Fraction(a * d - b * c, b*d); // (a/b)-(d/c) we find a gdc
    return *this;
}
Fraction& Fraction::operator*=(const Fraction& rhs){
    int a = m_numerator, b = m_denominator, c = rhs.m_numerator, d = rhs.m_denominator;
    *this = Fraction( a*c  , b* d);// we mult
    return *this;
}
Fraction& Fraction::operator/=(const Fraction& rhs){
    int a = m_numerator, b = m_denominator, c = rhs.m_numerator, d = rhs.m_denominator;
    *this = Fraction(a*d,b*c);//porportional s11/s22 s21/s basicly filping for multi c/d /= a / b =  a*d/b*c // divide by frac
    return *this;
}
std::ostream& operator<<(std::ostream& out,const Fraction& f){
    return out << f.toString();
}
std::string Fraction::toString() const
{
    ostringstream out;
    out<< m_numerator;
    if(m_denominator !=1){out << "/"<<m_denominator;}
    return out.str();
}
// since we overload for our obj we gots the fun time
const Fraction operator+(const Fraction& lhs, const Fraction& rhs){
    Fraction result{lhs};
    return result+=rhs;
}
const Fraction operator-(const Fraction& lhs, const Fraction& rhs){
    
 Fraction result{lhs};
 return result-=rhs;
}
const Fraction operator*(const Fraction& lhs, const Fraction& rhs)
{
    Fraction result{lhs};
    return result*= rhs;
}
const Fraction operator/(const Fraction& lhs, const Fraction& rhs)
{
    Fraction result{lhs};
    return result/= rhs;//keke lol
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    cout << "Uncomment these and use make run to test." << endl;
    // Fraction a(3, 6); // 1/2 after reducing
    // Fraction b(1, 3); // 1/3
    // Fraction c(1, 6); // 1/6

    // Fraction sum = a + b + c;

    // cout << a << " + " << b << " + " << c
    //     << " = " << sum << endl;

    return 0;
}

