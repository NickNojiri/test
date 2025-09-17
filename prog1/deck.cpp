#include <iostream>
#include <cstdlib>
#include "Deck.h"

using namespace std;

Deck::Deck()
{
    const char suit[4] = {'C','S','D','H'};
    const char rank[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

    int index = 0;
    for(int s = 0; s < 4; ++s)
    {
        for(r = 0; r < 13; ++r)
        {
            card[index++] = Card(ranks[r],suits[s]);
        }
    }
    top= 0;
}

Card Deck::deal()
{
    return cards[top++];
}

void Deck::display()
{
    for(int i = 0; i < 52;++i)
    {
        card[i].display();
        if(i%13 == 12)
        {
            cout << endl;
        }
        else
        {
            cout << ",";
        }
    }
}

void Deck::shuffle()
{
    for(int i = 51; i > 0 ; i--)
    {
        int j = rand() % i + 1;
        Card temp = card[i];
        cards[i] = card[j];
        card[j] = temp;
    }
    top=0;
}