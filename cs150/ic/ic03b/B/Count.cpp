#include <string>
using std::string;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here
int countCode(const string& str)
{
    int result=0;
    for(size_t i = 4 , slen = i , len = str.size(); i<=len; ++i)
    {
        string subs = str.substr(i - slen, slen );
        if(subs.substr(0,2)=="co" and subs.back() == 'e')
        {
            ++result;
        } 
    }
    
    return result;
}
