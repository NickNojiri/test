#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "stars.h"
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.

void starcat(const string& catName)
{
    // Open the star catalog
    ifstream  in (catName);
    // If you can't open, then print an error message and exit
    if(in.fail())
    {
        cerr <<"cannot open "<< catName << endl;
    }
    // Read the file ands
    // double x, y ,z, mag;
    // int drap, harvard;
    Star s;
    while(in>> s.x>> s.y >>s.z >> s.draper >> s.magnitude >> s.harvard){
        //  -- Print only the named stars
        string name,name1,name2;
        s.name1=s.name2 = "";
        getline(in ,name);
        if(!name.empty()){
            auto pos =name.find(';');
            if (pos== string::npos)
            {
                s.name1 =name.substr(1);
            }
            else{
            s.name1 = name.substr(1,pos - 1);
            s.name2 = name.substr(pos+2);
            }
            cout<< s.name1<< ", ("<<s.x<<", "<<s.y<<"), "<<s.magnitude <<endl;
        }
    }
        //  -- primary-name, (x, y), magnitude
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    starcat("stars.txt");

    return 0;
}
