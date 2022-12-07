
/**
 *  @nicholas nojiri
 *  @2/3/2022
 *  @file h00.cpp
 */
 
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "nnojiri";  // nnojiri
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    cout << STUDENT << "-" << ASSIGNMENT << ": ";// "nnojiri-h00.cpp:""
    cout << "ceral box calc" << endl;
    cout << string(50,'-') << endl;
    // docz
    cout << "Enter ounces per box of cereal"<< 10 << endl;
    // Write your code here
    const double ton = 35273.92;//this is ton to oz
    
    double ceralW;
    // inputz
    cin >> ceralW;
    double weightIn = ceralW/ ton;
    double boxesPerTon = (1.0/weightIn);
    
    //out
    cout << "Weight in metric tons, boxes per ton: ["
    << weightIn << ", " << boxesPerTon << "]" << endl;

    return 0;
}

