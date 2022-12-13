#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

string STUDENT = "WHO ARE YOU?";  // Add your Canvas login name

void processExpenses(const string& infile, const string& outfile)
{
    // Open the input file
    // Print an error message and exit if it can't be found.
    
    // Create the output file expense-summary.txt
    // Print an error message and exit if it can't be found.
    
    // Loop through each character in the file
        // Is the character a NON-digit
        //      Then print it out
        // Otherwise
        //      Create and initialize sum to 0 for the line
        //      Repeat until until in fails or ch == '\n'
        //          If ch is a digit
        //              put it back in the stream
        //              read a number from the stream with >>
        //              add the number to the sum
      //      Print sum with 2 decimals and a newline
    // End of outer loop
    ifstream fin(infile);
    if(fin.fail())
    {
         cerr << "Cannot open " << infile<< endl;
         return;
         
    }
    
    ofstream fout(outfile);
    
    if(fout.fail()){
        cerr<< "Cannot create " << outfile << endl;
        return ;
    }
    
    char ch;
    while(fin.get(ch)){
        if(!isdigit(ch)){fout.put(ch);  }
        else {
            
            double sum  =0;
            
            while(!fin.fail() && ch != '\n'){
                if(isdigit(ch)){
                    fin.unget();
                    double n ;
                    fin>>n;
                    sum += n;
                    
                    
                    
                }
                fin.get(ch);
            }
            fout<<fixed<<setprecision(2)<<sum<<endl;
        }
        
        }
    }


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
