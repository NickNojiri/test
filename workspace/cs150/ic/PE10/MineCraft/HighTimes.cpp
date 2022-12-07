#include <chrono>
#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

int main()
{
    int seconds = 500000;
    
    const int highTimes = 260;
    int currTime;
   
    cout<<"enter time in mins\n";
    cin>> currTime;
    while(!cin){
    
        currTime=0;
        cout<<"wild thats not a int \n";
        cin.clear();
        cin.ignore();
        cin>> currTime;
    }
    while(currTime >-1 || currTime<1440  ){
        if(highTimes==currTime  ){
            cout<<"Finally ";
            break;
        }
        else if(currTime == 1440){
            currTime=0;//newday
        }
        else{
            usleep(seconds);
            cout<<fixed<<setfill('0')<<setw(2)<< currTime/60 <<":"<<setfill('0')<<setw(2) <<currTime%60 <<'\n';
            currTime++;
        }
    }
    cout<<"it has to be 4:20 sometime ";

    return 0;
}
