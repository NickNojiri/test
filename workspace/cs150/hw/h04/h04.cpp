/**
 *  @nick Nojiri
 *  @2022 ss
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "nnojiri";  // Add your Canvas login name
extern string ASSIGNMENT;

// Add your function declaration here
string getStatus(float gpa, int units, int hUnits)
{
	string result;
	string mcl = "magna cum laude";
	string cl = "cum laude";
	string scl = "summa cum laude";
	string g = "graduating";
	string ng ="not graduating";
	
	
	
	if(gpa < 2.0 or units <= 179)
	{
		result = result + ng ;
	}
	else if(gpa <= 3.6)// gradu
	{
		if(gpa<3.59)
		{
			result = result + g;
		}
		else
		{
			result= result+ cl ;
		}
	}
	else if(gpa <= 3.79 )
	{
		if (gpa < 3.79 and hUnits < 15)
		{
			result = result + cl ;
		}
		else
		{
			result = result + mcl;	
		}
	}
	else
	{
		if (hUnits >= 15)
		{
			result= result + scl;
		}
		else
		{
			result = result+ mcl;
		}
	}
	
	return result;
	
}

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ANYTHING IN THIS FUNCTION
    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here
