#include "Vector2D.h"
using namespace std;

//part 1
ostream & operator <<(ostream &out, const Vector2D &value)
{
    out << "<"
    << value.x
    << ","
    << value.y
    << ">";
    
    return out;
}

//part 2
Vector2D Vector2D::operator+(const Vector2D &parameter)const
{
   Vector2D result(x+parameter.x,y+parameter.y);
   return result;
}

//part 3
Vector2D operator-(const Vector2D & rightHandSide,const Vector2D & leftHandSide)
{
   Vector2D result(rightHandSide.getX()-leftHandSide.getX(), rightHandSide.getY()-leftHandSide.getY());
   return result;
}

//part 4 
int Vector2D::operator*(const Vector2D &parameter)const
{
   return (x * parameter.x) + (y * parameter.y);
}

//part 5
Vector2D& Vector2D::operator*=(int scalar)
{
   x= x*scalar;
   y= y*scalar;
   return *this;
}

//part 6
bool Vector2D::operator==(const Vector2D& parameter )const
{
   return (parameter.x == x && parameter.y == y);
}