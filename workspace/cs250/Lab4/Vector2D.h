#ifndef VECTOR2D
#define VECTOR2D
#include <ostream>
class Vector2D
{
public:
    Vector2D() : x(0), y(0) {}
    Vector2D(int newX, int newY) : x(newX), y(newY) {}
    friend std::ostream & operator <<(std::ostream &out, const Vector2D &value);
    int getX() const;
    int getY() const;

    Vector2D Vector2D::operator+(const Vector2D &num)const;
    bool operator==(const Vector2D& num)const;
    //Vector2D operator - (const Vector2D & rightHandSide,const Vector2D & leftHandSide);
    int operator*(const Vector2D &num)const;
    Vector2D& Vector2D::operator*=(int scalar);

    ~Vector2D() {}

private:
    int x;    //first vector value
    int y;    //second vector value
};
#endif