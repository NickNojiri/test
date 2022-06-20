/**
    Inheritance review.
    CS 150 Fall 2019
*/
#include <iostream>
#include <string>
using namespace std;
//super class
#include "person.h"
#include "instructor.h"
#include "student.h"

int main()
{
    // Using the default constructor
    cout << "Person, default constructor." << endl;
    Person maxwell;
    maxwell.setName("Maxwell Smith");
    maxwell.setBirthday("November 23, 1978");
    maxwell.print();

    // Using the working constructor
    cout << "\nPerson, working constructor." << endl;
    Person bob("R. Redford", "July 3, 2011");
    bob.print();

    // 1. Instructor: using the default constructor
    cout << "\nInstructor with default constructor." << endl;
    Instructor margy;
    // 1.1 Inherited methods work without changes
    margy.setName("Margy Smith");
    margy.setBirthday("December 21, 1972");
    // 1.2 Add a new method
    margy.setSalary(85000);
    // 1.3 Override an existing method
    margy.print();

    // 2. Instructor: adding a working constructor
    //cout << "\nInstructor with working constructor." << endl;
    //Instructor pam("Pam Barvarz", "June 6, 1966", 105000.00);
    //pam.print();

    // 3. Do these on your own
    //cout << "\nStudent with default constructor." << endl;
    //Student jonathan;
    //jonathan.setName("Jonathan Smith");
    //jonathan.setBirthday("June 12, 1979");
    //jonathan.setMajor("Computer Science");
    //jonathan.print();

    //cout << "\nStudent with working constructor." << endl;
    //Student sam("Sam Gamgee", "Eleventeenth of June", "Gardening");
    //sam.print();

    return 0;
}












