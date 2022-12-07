#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "point3D.h"
using namespace std;
//this will represent the file.h

//this will represent the cpp file
    //Point3D()

Point3D::Point3D(double x, double y, double z){
    m_x = x;
    m_y = y;
    m_z = z;
}
double Point3D::getX() const{
    return m_x;
}
double Point3D::getY() const{
    return m_y;
}
double Point3D::getZ() const{
    return m_z;
}
void  Point3D::setX(double x){
    m_x=x;
}
void  Point3D::setY(double y ){
    m_y = y;
}
void  Point3D::setZ(double z){
    m_z = z;
}
void  Point3D::tranlate(double x, double y, double z){
    m_x += x;
    m_y += y;
    m_z += z;
}
//void setpoint(double y){
  //  m_y = y;
//} willl not run ass it not a member fuc
std::string  Point3D::toString() const{
    ostringstream out;
    out<<fixed << setprecision(2)<< "Point3D (x= "<< m_x << ", y= "<< m_y << ", z= "<< m_z<< " )" <<endl;
    return out.str();
}
int main() 
{
   Point3D p(10,10,10);
   cout<< p.toString()<<endl;
   
}
