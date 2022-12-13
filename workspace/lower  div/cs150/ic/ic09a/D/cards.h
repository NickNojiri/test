#ifndef CARDS_H
#define CARDS_H
#include <string>
#include <iostream>

enum class Suit {
    Clubs, Spades, Diamonds, Hearts
};

enum class Rank {
    Ace, Two, Three, Four, Five, Six, Seven,
    Eight, Nine, Ten, Jack, Queen, King
};

std::string to_string(Suit s);
std::string to_string(Rank r);

struct Card {
    Rank rank;
    Suit suit;
};

std::ostream& operator<<(std::ostream& out, const Card& c);
std::istream& operator>>(std::istream& in, Card& c);

#endif

