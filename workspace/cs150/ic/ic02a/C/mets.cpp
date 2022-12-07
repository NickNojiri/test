/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file mets.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
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
int num;
int weight;
int mins;
    // Write your code here

    const double METS= .0175;
    cout << "Your weight in pounds: "<< endl;
    cin >> weight;
    cout << "Number of METS for the Activity: "<<endl;
    cin >>num ;
    cout << "Minutes spent exercising: " <<endl;
    cin >> mins ;
    double calBurn = num*(weight/2.2)*mins*METS;
    
    cout << fixed << setprecision(2);
    
    cout << "You burn an estimated ["<< calBurn<<"] calories." << endl;
    
    
    return 0;
}
