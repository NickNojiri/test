/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here

/** read a point (x,y)
 * @param input stream
 * @param pointer to p
 */
void get(istream& in ,Point& p){
    in >> p.x;
    in.ignore();
    in >> p.y;
}
 /**
 * Displays a Point in the form (x, y).
 * @param out the stream to print on
 * @param p the Point to print
 */
void print(ostream& out, const Point& p){
    out << "("<< p.x << ", "<< p.y << ")";
}

/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */
double distanceBetween(const Point& a, const Point& b){
    double result= 0.0 ; 
    double x = b.x - a.x; 
    double y = b.y - a.y;
    result = sqrt ((x*x)+(y*y));
    return result;
}

/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b){
    auto x =(a.x + b.x )/2; //two point objects are compearing temp values
    auto y =(a.y +b.y)/2 ;
    Point c;
    c.x = x;
    c.y = y ; 
    return c;
}


/**
 * Calculates the perimeter of the Triangle t.
 * @param t the Triangle to examine.
 * @return the perimeter.
 */
double perimeter(const Triangle& t){
    double a = distanceBetween(t.p1 , t.p2); //1/2
    double b = distanceBetween(t.p2, t.p3); //2/2
    double c = distanceBetween(t.p3, t.p1); //1/1
    double total = a + b + c;
    return total;
    
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    

    return 0;
}