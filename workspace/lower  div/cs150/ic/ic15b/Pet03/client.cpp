//	Pointers to base classes
//	Using virtual functions
#include <iostream>
#include "pets.h"
using namespace std;

void speak(Pet p)      { p.speak();   }
void speak(Pet * pPtr) { pPtr->speak(); }

int main()
{
	// Objects of each class with base-class pointers
	Cat c; Dog d;
	Pet * cPtr = &c;
	Pet * dPtr = &d;

	// 1. What happens here?
    cout << "\nSection 1: Calling virtual functions through base pointers." << endl;
	cout << "2 Pet pointers \"speak()ing\"" << endl;
	cPtr->speak();
	dPtr->speak();

	// 2. How big is each object with virtual functions?
    cout << "\nSection 2: How big is each object?" << endl;
	cout << "Cat = " << sizeof(Cat) << endl;
	cout << "Dog = " << sizeof(Dog) << endl;

	// 3. What do you expect here?
    cout << "\nSection 3: Polymorphic functions can't take objects." << endl;
	cout << "Passing a Cat and a Dog object.\n";
	speak(c);
	speak(d);

	// 4. How about here?
    cout << "\nSection 4: Call polymorphic functions with pointers." << endl;
	cout << "Passing a Cat and a Dog pointer\n";
	speak(&c);
	speak(&d);

	// 5. or here?
    cout << "\nSection 5: Call polymorphic functions with a BASE pointers." << endl;
	speak(cPtr);
	speak(dPtr);

    return 0;
}
