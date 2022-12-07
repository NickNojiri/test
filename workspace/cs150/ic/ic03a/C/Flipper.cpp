#include <string>
using std::string;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here
string flipCase(  const string& str){
    string result;
    for(char c : str ){
        if(isupper(c)){
            result += tolower(c);
        }
        else if(islower(c)){
            result += toupper(c);
        }
        else{
            result += c;
        }
        
    }
    
    return result;
}