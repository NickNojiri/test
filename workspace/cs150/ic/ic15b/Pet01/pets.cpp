//	A simple class hierarchy
//  "static" polymorphism
#include <iostream>
#include "pets.h"
using namespace std;

/////////////// Pet Members //////////////////////
Pet::Pet() : ID(gID++) { }

// Generic "Pet" doesn't know what to say
void Pet::speak() const
{
    cout << "Generic pet # " << getID()
        << " says \"What's my motivation?\"." << endl;
}

// In general, pets don't need to be licensed
void Pet::license() const
{
    cout << "No license required" << endl;
}

int  Pet::getID() const { return ID; }

/////////// Cat Members /////////////////////////
void Cat::speak() const
{
    cout << "Cat # " << getID()
        << " says \"Meow\"." << endl;
}

////////////// Dog Members //////////////////////
void Dog::speak() const
{
    cout << "Dog # " << getID()
        << " says \"Arf\"." << endl;
}

void Dog::license() const
{
    cout << "Yearly license required." << endl;
}

////////////// Static Members //////////////////////
int Pet::gID = 100; // static
