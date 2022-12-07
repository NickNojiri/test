/**
    @file enum.h
    @author Stephen Gilbert
    @version CS 150 Spring 2022
*/
#ifndef ENUM_H_
#define ENUM_H_
#include <string>

enum class Coin
{
    Penny = 1,
    Nickel = 5,
    Dime = 10,
    Quarter = 25,
    Half = 50
};

std::string to_string(Coin c);
double value_of(Coin c);

#endif
