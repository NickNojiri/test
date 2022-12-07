#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string STUDENT = "nnojiri";  // Add your Canvas login name

#include "fliplines.h"

// place your code here


/**
    flipLines accepts the name of a file as its parameter.
    The function opens and writes to the console the 
    same file's contents with successive pairs of lines 
    reversed in order. If the file cannot be opened, then
    "Cannot open filename.txt" is printed to cerr, 
    with filename.txt replaced with the actual name.
    
    @param fname the name of the file to open and read from
*/
void flipLines(const std::string& fname){
     ifstream fin  ; 
     fin.open(fname);
    
     if(!fin){
         fin.clear();
         cerr << "Cannot open "<< fname<<endl;
     }
     else
     {
         string line1 , line2;
         while(getline(fin, line1 )){
             if(getline(fin, line2 ))
             {
                 cout<<line2<<endl<<line1<<endl;
             }
         }
     }
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
