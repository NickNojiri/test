/*
   @file stars.h
   @author Stephen Gilbert
   @version CS 150 Spring 2022
*/
#ifndef STARS_H
#define STARS_H
#include <string>
#include <iostream>
/*
    stars.txt contains a star catalog:

    *  x, y and z coordinates.
        - Each axis goes from -1 to +1, center at 0,0.
    * Henry Draper number, a unique identifier for the star.
    * The magnitude (or brightness) of the star.
    * The Harvard Revised number, another identifier.
    * The seventh field exists only for a small number of stars
      and is a semicolon-separated list of names for a star.
        - A star may have several names.
*/
struct Star {
  double x, y, z, magnitude;
  int draper, harvard;
  std::string name1, name2;
};

std::ostream& print(std::ostream& out, const Star& );
std::istream& read(std::istream& in, Star& );
  //struct Point3D{double x, y ,z;}
  //struct Names{string name 1 anme2;}
  //struct Catalog

 // cin > a.name1 >> a.name2 // op a.[name]


#endif
