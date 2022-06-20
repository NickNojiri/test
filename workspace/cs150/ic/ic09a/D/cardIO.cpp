#include <iostream>
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID
#include "cards.h"

// Complete the input and output operators for the Card class
// Use the to_string() functions for the Rank and Suit types
std::ostream& operator<<(std::ostream& out, const Card& c)
{
    out<<to_string(c.rank)<< " of " << to_string(c.suit); 
    return  out;
}
std::istream& operator>>(std::istream& in, Card& c)
{
    char r; 
    in >> r >> c ;
    
    switch(r)
    {
        case 'a' : c.rank = Rank::Ace; break;
        case '2' : c.rank = Rank::Two; break;
        case '3' : c.rank = Rank::Three; break;
        case '4' : c.rank = Rank::Four; break;
        case '5' : c.rank = Rank::Five; break;
        case '6' : c.rank = Rank::Six; break;
        case '7' : c.rank = Rank::Seven; break;
        case '8' : c.rank = Rank::Eight; break;
        case '9' : c.rank = Rank::Nine; break;
        case 't' : c.rank = Rank::Ten; break;
        case 'j' : c.rank = Rank::Jack; break;
        case 'q' : c.rank = Rank::Queen; break;
        case 'k' : c.rank = Rank::King; break;
       
        default: throw "IILEGAL RANK"s;
        
    }
    return in  ; 
    
    
}





/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
