#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

extern const string STUDENT = "put your id here";

// Complete the toDollars function
string toDollars(double amt)
{
    string result;
    ostringstream out;
   out<<fixed<<setprecision(2);
   out<<amt;
   string dollars = out.str();
   //"1234.00"
   int pos = dollars.size() - 3;
   result = dollars.substr(pos);
   pos -=3;
   while(pos > 0){
       result = ","+dollars.substr(pos, 3) +result;
       pos-=3;
   }
   result ="$ " + dollars.substr(0,pos+3)+result;
   
    return result;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
