//Nicholas Nojiri honnors statment ect....
//9/30/2025 time 10:20pm

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Card {
private:
    char r;
    char s;
    
public:
    Card(char rank, char suit): r(rank), s(suit) {}

    void display() const {
        if(r =='T') cout << "10" << s;
        else cout << r << s;
    }

    int compare(const Card& otherCard) const {
        int result;
        string order = "A23456789TJQK";

        int first = static_cast<int>(order.find(r));
        int second = static_cast<int>(order.find(otherCard.r));
        if( first > second) result = 1;
        else if( first < second) result = -1;
        else result = 0;
        return result;
    }
    
};

class Deck {
    private:
        vector<Card> cards;
        size_t top;

    public:
        Deck() : top(0) {
            const char suits[4] = {'C','S','D','H'};
            const char rank[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
            for(int s = 0; s < 4; ++s) 
            {
                for(int r = 0; r < 13; ++r)
                {
                    cards.push_back(Card(rank[r], suits[s]));
                }
            }
        }
        
    Card deal() {
        if (top >= cards.size()) {
        throw runtime_error("Error - Deck is empty");
        }
        return cards[top++];
        }

    void display() const {
        for (size_t i = 0; i < cards.size(); ++i) {
            cards[i].display();
            if (i % 13 == 12) cout << "\n";
            else              cout << ",";
        }
    }

    void shuffle() {
        // Fisher–Yates
        for (int i = static_cast<int>(cards.size()) - 1; i > 0; --i) {
            int j = rand() % (i + 1);
            if (j != i) {
                Card tmp = cards[i];
                cards[i] = cards[j];
                cards[j] = tmp;
            }
        }
        top = 0;
    }

    bool isEmpty() const { return top >= cards.size(); }
};

/* ---------------- Player ----------------
   - Track name, wins, losses, ties
*/
struct Player {
    string name;
    int win = 0;
    int lose = 0;
    int tie = 0;
};

int main() {
    // Introduce rand()/srand(): seed once at start (spec mentions this topic)
    srand(static_cast<unsigned>(time(nullptr)));

    // 1) New deck
    Deck deck;

    // 2) Ask names
    Player p1, p2;
    cout << "Enter the name of the first player: ";
    getline(cin, p1.name);
    cout << "\n";

    cout << "Enter the name of the second player: ";
    getline(cin, p2.name);
    cout << "\n";

    // 3) Ask number of games
    int gamesRequested = 0;
    cout << "How many games will they play? ";
    cin >> gamesRequested;
    cout << "\n";

    // 4) Unshuffled deck
    cout << " Original Deck\n\n";
    deck.display();
    cout << "\n";

    // 5) Shuffle
    deck.shuffle();

    // 6) Shuffled deck
    cout << " Shuffled Deck\n\n";
    deck.display();
    cout << "\n";

    // 7) Play the requested number of games
    try {
        for (int game = 1; game <= gamesRequested; ++game) {
           if (deck.isEmpty()) {
            throw "Error - Deck is empty";
        }
            cout << "Game " << game << "\n--------\n";

            Card c1 = deck.deal();
            Card c2 = deck.deal();

            cout << "        " << p1.name << "=>";
            c1.display();
            cout << "\n";

            cout << "        " << p2.name << "=>";
            c2.display();
            cout << "\n\n";

            int res = c1.compare(c2);
            if (res > 0) {
                cout << p1.name << "=> Winner\n\n";
                ++p1.win; ++p2.lose;
            } else if (res < 0) {
                cout << p2.name << "=> Winner\n\n";
                ++p2.win; ++p1.lose;
            } else {
                cout << "Tie game\n\n";
                ++p1.tie; ++p2.tie;
            }
        }
    } catch (const char* msg) {
        // 8) Catch and resolve the exception (exact message)
        cout << msg << "\n\n";
    }

    // Final stats
    cout << "------Final Stats-------\n\n";
    cout << "       " << p1.name << " vs. " << p2.name << "\n\n";
    cout << "Wins   " << p1.win << "        " << p2.win << "\n";
    cout << "Losses " << p1.lose << "         " << p2.lose << "\n";
    cout << "Ties   " << p1.tie << "          " << p2.tie << "\n";

    return 0;
}

