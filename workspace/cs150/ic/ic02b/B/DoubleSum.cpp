#include <string>
using std::string;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here

int doubleSum(int a, int b)
{
    int result = 0;
    
    if(a==b){
        result=(a+b)*2;
    }
    else{
        result = a+b;
    }
    return result;
}