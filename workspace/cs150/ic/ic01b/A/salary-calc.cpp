-/**
 *  @nicholas nojiri
 *  @spring2022tue/thru
 *  @file salary-calc.cpp
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
    // For input, you’ll need the original salary. 
    // For output you’ll need to calculate the new annual salary.   // With the new salary, you can calculate the new monthly salary
    // To calculate the retroactive pay, subtract the old salary from the new. This would be the retroactive pay for an entire year. You want only the pay for six months.
    // calc new an = og *(1+percentage)
    // new month = new an /12
    // retro = (new an - og)/2
    // Write your code here
    
    
//input 

    cout << "Enter current annual salary" << endl;
    double ogSal;
    cin >> ogSal;
    
//prossesing
    const double kPercent = 10.076;
    const int month = 12;
    double newSal = ogSal * (1 + kPercent);
    double newMonthly = newSal / month;
    double retroactivePay = (newSal - ogSal)/ 2;
    
    cout << fixed << setprecision(2);
    
    cout << "New annual, monthly and retoractive: [ " 
    << newSal << ", " << newMonthly 
    << ", " <<  retroactivePay << " ]" << endl;
    
    return 0;
}
