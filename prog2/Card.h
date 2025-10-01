#ifndef CARD_H
#define CARD_H

class Card {
    private:
        char rank;
        char suit; 
        static int rankValue(char r); //acelower

    public:
        Card();
        Card(char rank,char suit);
        
        void display() const;
        int compare(const Card& other) const;
};

#endif