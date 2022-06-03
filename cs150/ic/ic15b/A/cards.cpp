#include <string>
#include <iostream>
using namespace std;

#include "cards.h"

//// Card members ////////////////////////////
Card::Card(const string& n) : name_(n) {}
bool Card::isExpired() const { return false; }
void Card::print() const
{
    cout << "Name: " << name_ << endl;
}

//// IDcard members ////////////////////////////
IDcard::IDcard(const string& n, const string& id)
    : Card(n), IDnumber_(id)
{}

void IDcard::print() const
{
    Card::print();
    cout << "ID number: " << IDnumber_ << endl;
}

//// CallingCard members ////////////////////////////
CallingCard::CallingCard(const string& n,
    const string& num, const string& p)
        : Card(n), cardNumber_(num), pin_(p)
{}

void CallingCard::print() const
{
    Card::print();
    cout << "Card number: " << cardNumber_ << endl;
    // Pin not printed for security reasons
}

//// DriversLicense members ////////////////////////////
DriverLicense::DriverLicense(const string& n,
    const string& expires)
        : Card(n), expirationDate_(expires)
{}

void DriverLicense::print() const
{
    Card::print();
    cout << "Expiration date: " << expirationDate_ << endl;
    // Pin not printed for security reasons */
}
