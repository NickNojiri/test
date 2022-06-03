/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file enum.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID



#include "enum.h"
// Add your implementation here
std::string to_string(Coin c){
    switch(c){
        case Coin::Penny: return "Penny";
        case Coin::Nickel: return "Nickel";
        case Coin::Dime: return "Dime";
        case Coin::Quarter: return "Quarter";
        case Coin::Half: return "Half-Dollar";
        default: return "INVALID COIN";
    }
    
}

double value_of(Coin c){
    return static_cast<double >(c)/100.0 ;
}


