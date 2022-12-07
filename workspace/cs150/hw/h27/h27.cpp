/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h27.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "h27.h"

string STUDENT = "nnojiri";  // Add your Canvas login name
extern string ASSIGNMENT;

// Implement your member functions here
istream& Time::read(istream& in){
    int h=0, m=0;
    string time;
    in>> time;
    h = h *10 + (time[0]- '0');
    if(time[1]!=':'){
        h = h* 10 + (time[1] -'0');
        m = m * 10 +(time[3]-'0');
        m = m * 10 + (time[4]-'0');
    }
    else {
        m = m * 10 +(time[2]-'0');
        m = m * 10 + (time[3]-'0');
    }
    if(h >= 24 || m > 60 ){in.setstate(ios::failbit);}// failed bits
    else{
        hours = h;
        minutes = m;//overload the op l8er use
        
    }
    return in;
}

Time Time::sum(Time t){
    int minA = (minutes + t.minutes)% 60 ;
    int hrA = (hours + t.hours)% 60 % 12;
    if(minutes + t.minutes >= 60){hrA = (hrA+1)%24%12;}
    hrA +=11;
    hrA %= 12;
    hrA += 1;
    return Time{hrA,minA};
}
Time Time::difference(Time t){
    int minB = (minutes - t.minutes + 60 )%60;
    int hrB = (hours - t.hours + 48)%60 %12;
    if(minutes < t.minutes){
        hrB= (hrB+ 23)%24 %12;
    }
        hrB+= 11;
        hrB%=12;
        hrB +=1;
        
    return Time{hrB,minB};
}

ostream& Time::print(ostream& out){
    out<< hours << ":";
    if(minutes< 10 ) {out << "0";}
    cout<< minutes;
    return out;
    
}


// Predefined functions for this assignment
int run()
{
    printHeading();

    Time startTime;
    Time duration;

    // Input section
    cout << "    Time: ";
    if (! startTime.read(cin)) { return die(); }
    cout << "    Duration: ";
    if (! duration.read(cin)) { return die(); }

    // Processing section
    Time after = startTime.sum(duration);
    Time before = startTime.difference(duration);

    // Output section
    cout << endl;
    duration.print(cout) << " hours after, and before, ";
    startTime.print(cout) << " is [";
    after.print(cout) << ", ";
    before.print(cout) << "]" << endl;

    return 0;
}

void printHeading()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": Time and Again" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Give me a time (such as 3:57) and a duration\n"
        << "(such as 1:05), and I'll tell you the sum\n"
        << "(that is, the time that follows the given time\n"
        << "by the given duration), and difference (the time that\n"
        << "precedes the given time by that duration)." << endl;
    cout << endl;
}

int die()
{
    cout << "[Failed Input]" << endl;
    cout.flush();
    return -1;
}
