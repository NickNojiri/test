#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
using namespace std;

class Deck
{
    private:
        vector<Card> cards;
        size_t top; 
    public:
        Deck();
        Card deal();
        void display() const;
        void shuffle();
        bool isEmpty() const;
};

#endif //DECK_H