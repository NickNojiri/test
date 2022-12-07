#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
//
class complex
{
public:
complex(){
    m_x = 0 ; 
    m_y = 0;
}
complex(int x){
    m_x =x;
    m_y=0;
}
complex(int x, int y)
{
    m_x = x;
    m_y = y;
}
//above are constuctors

//overload
bool operator ==(const complex &num )
{
    // x==y -> true else -> false
    bool result =  (m_x == num.m_x && m_y == num.m_y );
    return result;
}
complex operator - (const complex &num )
{
    complex result(m_x- num.m_x , m_y- num.m_y);
    return result;
}
complex operator + (const complex &num)
{
    complex result(m_x+ num.m_x, num.m_y+ m_y );
    return result;
}
complex operator * (const complex &num)
{
    complex result(m_x*num.m_x - m_y*num.m_y , m_y*num.m_x + m_x*num.m_y );
    return result;
}
complex operator / (const complex &num)
{
    complex result(m_x/num.m_x -m_y/num.m_y , m_x/num.m_x + m_y/num.m_y);
    return result;
}
// we call a friend to link the values to our non memebr fuctions
friend istream & operator >>(istream &  ,complex &);
friend ostream & operator <<(ostream & ,const complex &);

private:
    int m_x;
    int m_y;

};

istream & operator >> (istream &in , complex &num)
{
    cout << "enter a number plz \n";
    in >> num.m_x;
    cout << "enter the second number\n";
    in >> num.m_y;
    return in;
}

ostream & operator << (ostream& out ,const complex& num){
    if(num.m_y < 0){
        out << num.m_x <<" - "<< num.m_y <<":)"<< endl;
    }
    else {
        out << num.m_x << " + " << num.m_y<<":)" << endl;
    
    }
    return out ;
}




int main()
{
complex c1;
complex c2;
cout << "Enter the first complex number: \n";
cin >> c1;
cout << "\nEnter the second complex number:\n";
cin >> c2;
cout << "\nThe first number is: "<< c1; 
cout << "\nThe second number is: "<< c2 << '\n';

if(c1 == c2)
{
    cout << "wow so cool unreal the are equal\n"<< endl;
}
else
{
    cout << "\nThe given numbers are unequal. \n" << endl;
}

complex c3 = c1 + c2;
cout << "\n the sum of the complex numbers:\n"<<c3;
complex c4 = c1 - c2;
cout << "\nThe diff of the given numbers is: \n"<< c4;
complex c5 = c1 * c2;
cout <<"the product of the complex number:"<< c5<< '\n';
complex c6 = c1 / c2;
cout<< "the quo complex number: "<< c6 << '\n';


return 0;
    
}