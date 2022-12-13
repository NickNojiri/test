/**
 *  @nick Nojiri
 *  @2022 ss
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

string STUDENT = "nnojiri";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here

    // Write your code here
    //var declarations
    int min, hr, dmin,dhr,before,after,total,dtotal ;
    char discard;
    
    //promps
    cout << "please time: " << endl ; 
    cin >>hr>>discard>>min;
    cout << "please duration: " << endl ; 
    cin >>dhr>> discard>>dmin;
    
    //solutions
    total = (hr*60)+min;
    dtotal = (dhr*60)+dmin;
    after =(total+dtotal);
    before = (total-dtotal);
    if(after>=780 ){
        after = after%720;
        
    }
    if(before<0){
        before= 720+(before%720);
        
        if(before<=60 and before>0){
            before=before+720;
        }
    }

    cout << setfill('0');
    cout<< "["<<after/60 <<":"<<setw(2)<<after%60 <<", "<<before/60 << ":"<< setw(2)<<before % 60<<"]"<<endl;
    

    return 0;
}
