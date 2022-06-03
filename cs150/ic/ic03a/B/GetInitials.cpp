#include <string>
using namespace std;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here

string initials(const string& name ){
    
    
     string result; 
     const int SKIP = 1;
     
     char first = name.front();
     auto space = name.find(' ');
     char mi = name.at(space + SKIP);//skip will make the code look cleaner Skip represents the space skipped
     auto lastSpace = name.rfind(" ");
     char last = name.at(lastSpace + SKIP);
     result = result + first + mi + last;
     return result;
    
}
