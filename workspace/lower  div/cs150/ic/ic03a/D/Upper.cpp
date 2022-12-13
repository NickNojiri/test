#include <string>
using std::string;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here
void toUpper(string& str){
    
    for(char& c : str)
    {
        if (islower(c))
        {
          c =  toupper(c);
            
        }//if    
    }//4
}//function void set to upper
