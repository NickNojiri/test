#include "ex.h"

namespace ex{

double max(double a , double b , double c){
     double result;
    if(a>= b && a>=c){
        result = a;
    }
     if(b>=a && b>=c){
        result = b;
    }
    else{
        result = c;
    }
    return result;
}
double min(double a , double b , double c){
    double result;
    if(a<= b && a<=c){
        result = a;
    }
     if(c<= b && c<=a){
        result = c;
    }
    else{
        result = b;
    }
    return result;
}

}