#include <string>
using std::string;

string STUDENT = "nnojiri";  // Add your Canvas login name
//Write a function toReverse() that takes a single string as an argument and
//produces a duplicate with the characters in reverse order. You may use the
//
string toReverse(const string& s)
{
    string result;
   // for(int i = s.size(); i >=0 ; i--)
   for(size_t i = 0, len = s.size(); i < len; i ++)
    {
       // result = result + s[i];
       result= s.at(i)+ result ;

    }
return result;
}
// Write your function here
