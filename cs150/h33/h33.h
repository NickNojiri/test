/*
 *  h33.h
 *  @author your name goes here
 *  @version your section and day
 *  Point->Circle->Cylinder
 */

#ifndef H33_H_
#define H33_H_

#include "point.h"
#include <cmath>
#include <string>

// Use this for PI
const double PI = std::asin(1)*2;
//////// Put your class definitions here /////////////////////
// Put Circle first, then Cylinder
class Circle : public Point 
{
public:
    Circle(double rad, double x, double y);
    double getRadius()const;
    double getArea()const;
    double getCircumference()const;
    std::string toString(int decimal =2)const;

private:
    double radius;

};

class Cylinder : public Circle
{
public:
    Cylinder(double h , double r , double x , double y);
    double getHeight()const;
    double getArea()const;
    double getVolume()const;
    std::string toString(int decimal =2)const;
private:
    double height;

};

#endif
