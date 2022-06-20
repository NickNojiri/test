#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace::std;

class point2D
{
public:
point2D();

point2D(double x, double y){
    m_x = x;
    m_y = y;
    
}

//point2D getPoint(){}
double getPoint() const{
    return m_x;
}
double getPointY() const{
    return m_y;
}

string printMap()const 
{
    ostringstream out;
    out<<fixed
    << setprecision(2)
    << m_x
    << "<-x , "
    << m_y 
    << "<-y "
    << endl;
    return out.str();
}
void add(double x ,double y){
    m_x += x;
    m_y += y;
}
string displayMath() const
{
    ostringstream out;
    out<< fixed
    << setprecision(2)
    << " this is add "
    << m_x
    << "<--x + y  ,"
    << m_y
    << " this is subtract "
    << m_x
    << m_y
    << endl;
    return out.str();
}
private:
double m_y;
double m_x;

};
int main()
{
    point2D a(5.0, 5.0);
    cout<< a.displayMath();
    a.add(20,20);
    cout<< a.displayMath();
    return 0;
}
