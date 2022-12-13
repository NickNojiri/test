#include <string>
using std::string;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here

double moMoney(const string& str)
{
    double result = 0.0;
    
    double interger = 0.0;
    double fraction = 0.0;
    double base = 10;
    bool intPart{true};
    for(size_t i = 0 ; i < str.size() ; ++i)
    {
        
        char c  = str.at(i);
        if(c =='.')
        {
            intPart = false;
            continue;
        }
        else if(! isdigit(c)) continue;
        
        double digit = c -'0';// converts the binary digit
        
        if (intPart)
        {
            interger= interger *10 +digit;
        }
        else
        {
            digit = digit / base ; 
            fraction = fraction + digit;
            base = base* 10 ;
        }
       
    }
    result = interger +fraction  ;
    
    return result;
}
