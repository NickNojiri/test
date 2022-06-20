/**
 *  CS 150 - Pointers, functions and structures
 */
#include <iostream>
#include <string>
#include <memory>
using namespace std;
#include "employee.h"

// Instructions: use raw pointers first; then try
// with shared_ptr and unique_ptr

// Write a function named init which takes a
// pointer to an Employee structure, a constant string&
// and a double, and fills in the structure
void init(Employee * p,const string& n , double s){
    p-> name = n;
    p->salary = s;
}

// Write a function named doubleSalary that takes
// a pointer to an Employee object and that
// doubles that Employee's salary.
void doubleSalary(Employee * p)
{
    p-> salary = 2 *  p ->salary;
}

int main()
{

    // 1. Create two Employees.
    //    One on the stack, one on the heap.
    Employee bob;
    //Employee* pfred= new Employee;
    //shared_ptr<Employee> pfred(new Employee);//auto pfred(make_shared<Employee>())
    auto pfred(make_unique<Employee>());
    // 2. Pass both to the init() method to initialize them
    init(&bob, "Robert",10000.0);
    init(pfred.get(),"fred",12000.0);
   // init(pfred,"fred",12000.0);

    // 3. Print the info about each
    cout<< pfred -> name << ",$"<< pfred -> salary << endl;

    // 4. Double both employee's salaries
    doubleSalary(pfred.get());
    doubleSalary(&bob);
   //doubleSalary(pfred);

    // 5. Print the info again
    cout <<bob.name << bob.salary<<endl;
    // 6. Free any necessary memory
    //delete pfred;

    return 0;
}






