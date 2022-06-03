template<nametype T>
//idk why u cant extend file in pretext
#include <string>
#include <iomanip>
#include <sstring>
#include <iostream>
#include "pineapple.h"
using namespace::std;

    //default
    pineapple::pineapple();
    //working constructor
    pineapple::pineapple(T obj){
        object = obj;
    }
    
    T pineapple::pineapple()const
    {
        return object;
    }
    
    
    std::string pineapple::printObject() const
    {
        ostreamstring out;
        out<< fixed
        << setprecision(2)
        << object
        return out.str();
    }
    
 