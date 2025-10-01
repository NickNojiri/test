#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

Card::Card(char r, char s)
{
    rank = r;
    suit = s;
}

Card::Card()
{
    rank = 'A';
    suit = 'C';
}

void Card::display() const
{
    if (rank == 'T')
    {
        cout << "10"<< suit;
    }
    else
    {
        cout << rank << suit;
    }
}

int Card::compare(const Card& other) const
{
    int result;
    string order  = "A23456789TJQK";
    int value_one = static_cast<int>(order.find(rank)); // A->0 K->12
    int value_two = static_cast<int>(order.find(other.rank));
    if(value_one > value_two)
    {
        result = 1;
    }
    else if(value_two > value_one)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}