#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <string>

int main()
{
    Deck deck;// default constructor of the deck

    string player_one, player_two;
    cout << "Enter the name of the first player: ";
    getline(cin, player_one); // uses c in in a different way
    cout << endl;

    cout << "Enter the name of the second player player two:";
    getline(cin, player_two);

    return 0;
}