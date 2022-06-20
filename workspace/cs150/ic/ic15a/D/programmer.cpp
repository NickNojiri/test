#include <string>
using namespace std;

string ASSIGNMENT = "ic15a-A";

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "programmer.h"
// Implement your member functions here
Programmer::Programmer(const std::string&nm, double sal):Employee(nm , sal) {}
    
    std::string Programmer::getName() const{
        return Employee::getName() + " (Programmer)";
        
    }
    


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;


    return 0;
}






