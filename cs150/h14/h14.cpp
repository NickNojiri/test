/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine(const string& prompt = ""){
    
    string o;
    getline(cin, o);
    if(prompt.empty()) {cout << prompt;}
    else if(!isspace(prompt.back()) ) {cout << prompt +" ";}
    else if(isspace(prompt.back()) ) {cout << prompt ;}
    return o;
}

int getInt(const string& prompt){
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
double getReal(const string& prompt){
    string line = getLine(prompt);//passes the prompt
    while(!cin.fail()){
        if(!line.empty()){
            istringstream in(line);
            double n;
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
    return 0.0;
}

bool getYN(const string& prompt){
    string line = getLine(prompt);//passes the prompt
    while(!cin.fail()){
        if(!line.empty()){
            istringstream in(line);
            string strings;
            in >> strings;
            
            if(strings.at(0)=='Y'||strings.at(0)=='y'){return true;}
            else if(strings.at(0)=='N'||strings.at(0)=='n'){return false;}
            
        }
        else{
            cerr << line;
            line.clear();
        }
        
        line = getLine(prompt);
    }
    return false;
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    do
     {
        string s = getLine("Enter a string: ");
        cout << "s->\"" << s << "\"" << endl;

         int n = getInt("Enter an integer:");
         cout << "n->" << n << endl;

        double d = getReal("Enter a real number: ");
        cout << "d->" << d << endl;

     } while (getYN("Try again? (Y/N)"));

    return 0;
}