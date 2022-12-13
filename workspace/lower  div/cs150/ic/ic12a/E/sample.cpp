#include <iostream>
using namespace std;

#include "a2d.h"

int main()
{
    int a[][MAX_COLS] = {
        {1, 2},
        {3, 4, 5},
        {6, 7, 8, 9}
    };

    cout << "aout(cout, a, 2, 4) ->";
    aout(cout, a, 2, 4) << endl;

    cout << "aout(cout, a, 3) ->";
    aout(cout, a, 3) << endl;
}