/**
 *  @nick nojiri 
 *  @date[date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[date][date[9]
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h13.h"

// Implement your function here
string dataSets(const string& fname){//write a token based sreams
    string result;
    int dataS, r;
    dataS = 1;
    double sum ,count ,value;
    ifstream in(fname);
    
    
    if(in.fail()){return fname + " cannot be opened."; }
    ostringstream out;
    //sets up the I/O for the steam file
    in>>r ;//sets the first value in r
    while(!in.fail()){
        //entering the loop
        sum= 0.0;
        count = 0.0;
        while(r != 0 ){
            in>> value ;
            count +=r;
            sum += value * r;
            in>>r;
        }
        if(dataS>1){
            out<< endl;
        }
        out << "data set " << dataS  << ": total values = " << setprecision(0)<< fixed << count << endl << "average value = "<< setprecision(4) << fixed << (sum /count) << endl;
        dataS++;
        in>>r;
    }
    result = out.str();
    return result;

}


///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}