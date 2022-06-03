// Write a simple filter program here
#include <iostream>
using namespace std;

int main()
{
    bool printing = false;
    char ch , prev = 0 ;
    while (cin.get(ch)){
        if (prev =='\n'&& ch == 'C'){ printing = true; }
        if (printing ){ cout.put(ch); }
        if(ch=='\n' ){printing = false;}
        prev = ch ;
    }
}
