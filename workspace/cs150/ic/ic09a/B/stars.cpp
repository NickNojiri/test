
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.
#include "stars.h"

// Put your implementation here
ostream& print(ostream& out, const Star& s)
{
    out<< s.name1<<", ("<< s.x <<", "<<s.y << "), "<< s.magnitude;
    return out;
}

std:: istream& read(std:: istream& in, Star& s )
{
    in>>s.x >>s.y >>s.z >>s.draper>> s.magnitude>> s.harvard;
    s.name1 =s.name2 = "";
    string name;
    getline(in, name);
    if(! name.empty())
    {
        auto pos = name.find(';');
        if(pos== string::npos){s.name1= name.substr(1);}
        else{
            s.name1 = name.substr(1,pos -1 );
            s.name2 = name.substr(pos + 2);
        }
    }
    return in;
}
std::ostream& operator<<(std::ostream& out, const Star& s){
    return print(out, s);
}
std::istream& operator>>(std::istream& in , Star& s){
    return read(in, s);
}


/////////////// STUDENT TESTING ////////////////////
#include <fstream>
#include <sstream>
int run()
{
    cout << "Student testing" << endl;
    cout << endl;
    cout << "Testing read and print" << endl;
    //# 1
    // ifstream in("stars.txt");
    // Star s;
    // while (read(in, s))
    // {
    //     if (! s.name1.empty() && s.magnitude > 6)
    //         print(cout, s) << endl;
    // }

    // cout << "Done part 1" << endl;

    // cout << endl;
    // cout << "Testing operator<< and operator>>" << endl;
    // // # 2
    // in.close();
    // in.clear();
    // in.open("stars.txt");
    // while (in >> s)
    // {
    //     if (! s.name2.empty() && int(s.magnitude) == 2)
    //         cout << s << endl;
    // }
    // cout << "Done part 2 " << endl;

    // // Star s;
    // cout << "Reading from a string" << endl;
    // istringstream sin(" 0.512379 0.020508 0.858515 432 2.28 21 CAPH; CAS BETA");
    // if (read(sin, s))
    //     print(cout, s) << endl;
    // else
    //     cout << "Error reading the value" << endl;
    // cout << "Done part 3 " << endl;

    return 0;
}
