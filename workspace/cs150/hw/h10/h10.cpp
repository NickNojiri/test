/**
 *  @nicholas nojiri
 *  @3/14/2022
 *  @file h10.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID : no

#include "h10.h"

// Place your function definitions in this file.
bool read(const string& promptAge, int& age, bool check){
    cout<<promptAge;
    cin>>age;
    if(cin.fail()){
        cin.clear();
        check= false;
    }
    else{
        check = true;
    }
    return check;
    }

bool  read(const string& promptGpa,double& gpa ,bool check){
   cout<<promptGpa;
    cin>>gpa;
    if(cin.fail()){
        cin.clear();
        check= false;
    }
    else{
        cin.ignore(1024,'\n');
        check = true;
    }
    return check;
    }

bool  read(const string& promptName,string& name,bool check){
 cout<<promptName;
 getline(cin ,name);
 return check;
}
bool read(char& ch, char dot){
    cin.get(ch);
    if(ch==dot){
        return false;
    }
    return true;
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

    // int age;
    // if (read("How old are you? ", age))^^';^;' ./doxgen @param >.<(><>,<s>)
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}

