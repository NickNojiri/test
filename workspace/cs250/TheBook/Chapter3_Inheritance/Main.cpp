#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
/*
There is no need to include the Employee.h
file, because it is already included in the
derived classes. In addition to that, there 
is no need to include iostream and/or string, 
because they have been also already included.
*/

#include <iomanip>
using namespace std;

int main()
{
	// Set up all floating-point numbers to be 
	// printed with two decimals and showing zeros.
	cout << fixed << setprecision(2);

	cout << "HOURLY EMPLOYEE\n\n";

	// Create an object of the HourlyEmployee class.
	HourlyEmployee john("111-22-3333", 16.75);
	
	// Print employee's information by using the 
	// base-class and the derived-class get functions.
	cout << "SSN: " << john.getSSN() << "\n";
	cout << "Rate: " << john.getRate() << "\n";
	
	// Change employee's information by using the 
	// base-class and the derived-class set functions.
	cout << "\nReset rate and ssn...\n";
	john.setRate(20.00);
	john.setSSN("100-20-3000");

	// Call function print. The call to the function comes
	// from an object of the HourlyEmployee class; therefore, 
	// the print function from the HourlyEmployee class will
	// be invoked.
	cout << "=> Call function print from the derived class...\n\n";
	john.print();

	cout << "\n-------------------------------\n";

	cout << "\nSALARIED EMPLOYEE\n\n";

	// Create an object of the SalariedEmployee class.
	SalariedEmployee jane("999-88-7777", 400.00);
	
	// Print employee's information by using the 
	// base-class and the derived-class get functions.
	cout << "SSN: " << jane.getSSN() << "\n";
	cout << "Salary: " << jane.getSalary() << "\n";

	// Change employee's information by using the 
	// base-class and the derived-class set functions.
	cout << "\nReset rate and ssn...\n";
	jane.setSalary(500.0);
	jane.setSSN("900-80-7000");

	// Call function print. The call to the function comes
	// from an object of the HourlyEmployee class; therefore, 
	// the print function from the HourlyEmployee class will
	// be invoked.
	cout << "=> Call function print from the derived class...\n\n";
	jane.print();

	cout << "\n-------------------------------\n";

	cout << "\nEMPLOYEE\n\n";

	// Create an object of the Employee class.
	Employee jim("444-33-2222");

	/*
	Recall that the base class does not know about any derived
	classes; therefore, any object of the Employee class cannot 
	use any functions and/or members of either the HourlyEmployee
	or the SalariedEmployee classes.
	*/

	// Call a public base-class member function.
	cout << "SSN: " << jim.getSSN() << "\n";

	// Call the print function.
	cout << "Call function print from the derived class...\n"; 
	jim.print();
	// It will call the print function of its own class.

	cout << "\n";
	return 0;
}


