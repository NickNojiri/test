#ifndef CARD_H
#define CARD_H

class Card {
    private:
        char rank;
        char suit; 
        static int rankValue(char r);

    public:
        Card(char rank,char suit);
        Card();
        
        void display()const;

        bool operator==(const Card& other) const;
        bool operator<(const Card& other) const;
        bool operator>(const Card& other) const;
        bool operator<=(const Card& other) const;
        bool operator>=(const Card& other) const;
        bool operator!=(const Card& other) const;

        int compare(card other) const;
};
#endif