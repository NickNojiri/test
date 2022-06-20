#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

string STUDENT = "Put your id here";

bool list(const string& args)
{
   istringstream  strIn(args) ; 
   int starting, ending;
   string fname, line ;
   
  
   strIn >> fname;
   strIn >> starting>> ending;
   
   ifstream in(fname);
   if(in.fail()){
       cerr<< "Cannot open "<< fname << endl;
       return false;
   }
   
   int lineNum = 1; 
   if(starting> ending){
       cerr << "Invalid start or end position: "<<args<<endl;
       return false;
   }
   
   while(getline(in,line )&& lineNum <= ending)
   {
       if(lineNum>= starting){
           cout<< setw(4)<< lineNum << ". "<< line<<endl;
       }
       lineNum++;
   }
   return true;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
