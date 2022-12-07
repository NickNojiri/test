#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.
#include "cars.h"

// Put your implementation here

std::ostream & operator<<(std::ostream& out , const Car& c)
{
    out << "{"<< c.mfg << ", " << c.model
        <<", "<< c.mpg << " MPG}";
        return out;
}

/////////////// STUDENT TESTING ////////////////////
#include <fstream>
#include <sstream>
int run()
{
    cout << "Student testing" << endl;

    // Car c {"Porsche", "Macan GTS", 20.8};
    // cout << c << endl;

    return 0;
}