#include <string>
#include <iostream>
#include <sstream>
#include <cassert>
#include <stdexcept>
using namespace std;

#include "inthelper.h"

string STUDENT = "Who are you?"; // Add your Canvas id here.

// Write your functions here
int parseInt(const string& s){
    istringstream in(s);
    int n;
    in >> n ;
    if(in && in.eof()) return n ;
    throw invalid_argument(s + " is not an intger");
}

string getLine(const string& prompt = ""){
    
    string o;
    getline(cin, o);
    if(prompt.empty()) {cout << prompt;}
    else if(!isspace(prompt.back()) ) {cout << prompt +" ";}
    else if(isspace(prompt.back()) ) {cout << prompt ;}
    return o;
}

int readInt(const std::string& prompt)
{
    string line = getLine(prompt);//passes the prompt
    while(!cin.fail()){
        if(!line.empty()){
            istringstream in(line);
            int n;
            in >> n; 
            in >> ws; //white spaces
            if(in.eof() && !in.fail()){return n;}
        }
        else{
            cerr<< line;
            line.clear();
        }
        line = getLine(prompt);
    }
    return 0;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    // cout << "Student testing" << endl;
    // cout << parseInt("125") << endl;
    // cout << parseInt("15.2") << endl;
    // int n = readInt("Enter a number");
    // cout << "You entered " << n << endl;

    return 0;
}
