#include <string>
using namespace std;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here
// 
string insideOut(const string& str)
{
    string result;
    size_t len = str.size();

    if (len < 3)
    {
        result =str;
    }
    else if (len %2==1)
    {//odd 
        int mid = len /2;
        string front = str.substr(0,mid);//
        char  middlef = str.at(mid) ; // xbar
        string back = str.substr(mid+1);// z skore +1
        
        result = middlef +front + back+middlef;
    }
    else
    {
        auto mid = len /2;
        string middle = str.substr(mid-1,2);
        string front = str.substr(0,mid-1);
        string back = str.substr(mid+1);
        result =  middle.front() +front+back + middle.back();
    } 
        
    return result;
    
    
}
