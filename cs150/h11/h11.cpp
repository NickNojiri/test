/**
    @file h11.cpp
    @nicholas nojiri
    @version some point
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h11.h"

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID
/**
    Recursively searches a string to find a second string.
    @param s the string to search through.
    @param t the string to search for
    @return true if t is found in s.

    Tests whether the string t is contained in a string s.
    For instance, calling the function like this:
        bool b = find("Mississippi", "sip");
    returns true, since "sip" is contained in "Mississippi".
    You must write this as a recursive function, not by just
    calling the string::find() function, or by using a loop.
*/
bool find(const string& s, const string& t){
    if(s.length() < t.length()){return false;}
    else if(s.substr(0,t.size())==t){return true;}
    return find(s.substr(1),t);
}

/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/
string stringClean(const string& str){
    if(str.length()<2){
        return str;
    }
    if(str.at(0)== str.at(1))return stringClean(str.substr(1));
    return str.at(0) + stringClean(str.substr(1));
    
}

////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

