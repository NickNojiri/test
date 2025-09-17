#include <iostream>
#include <string>
#include card.h

using namespace std;

Card::Card(char r, char s)
{
    rank = r;
    suit = s;
}

Card::Card()
{
    rank = 'A'
    suit = 'C'
}

void Card::display()
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

int Card::compare(Card other)
{
    int result;
    string order  = "A23456789TJQK"
    int value_one = order.find(rank)+1; // A->0 K->12
    int value_two = order.find(rank)+1;
    if(value_one > value_two)
    {
        result = 1;
    }
    else if(value_two > value_one)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

