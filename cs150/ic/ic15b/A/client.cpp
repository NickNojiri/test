/**
    Virtual functions and polymorphism.
*/
#include <iostream>
using namespace std;
#include "cards.h"
#include "billfold.h"

int main()
{
    Billfold bf;
    Card* cp(new Card("John Doe"));

    bf.add(cp);

    cp = new IDcard("John Smith", "0800640674");
    bf.add(cp);

    cp = new CallingCard("Star Card", "12398437", "3435");
    bf.add(cp);

    cp = new DriverLicense("John Doe", "09/30/2009");
    bf.add(cp);

    bf.printCards();

    return 0;
}
