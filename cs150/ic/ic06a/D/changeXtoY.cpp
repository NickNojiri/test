#include <string>

using namespace std;
string ASSIGNMENT = "ic06a-ex3c";
/**
    Write the function changeXtoY.

    Given a string, compute recursively
    (no loops) a new string where all the
    lowercase 'x' chars have been changed to 'y'

        changeXtoY("codex") returns "codey"
        changeXtoY("xxhixx") returns "yyhiyy"
        changeXtoY("xhixhix") returns "yhiyhiy"
*/
//////////// ADD YOUR CODE HERE /////////////////////
string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

string changeXtoY(const string& str){
    if(str == "") return str;
    char c = str.at(0);
    if(c == 'x' )c='y';
        
        return c + changeXtoY(str.substr(1));
        
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
