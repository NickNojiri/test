//	Objects and functions
#include <iostream>
using namespace std;

#include "pets.h"

// 1. Our potentially polymorphic functions
void speak(Pet p)      { p.speak();   }
void speak(Pet * pPtr) { pPtr->speak(); }

int main()
{
	// 1. Pet, Cat and Dog objects
	Pet p; Cat c; Dog d;
	cout << "Cat c->" << c.getID() << endl;
	cout << "Dog d->" << d.getID() << endl;

	// 2. Can dogs & cats speak?
    cout << "\nSection 1: Passing Dog & Cat objects speak(Pet)." << endl;
	speak(d);
	speak(c);

	// 3. How about using pointers?
    cout << "\nSection 2: Passing Dog & Cat pointers to speak(Pet*)." << endl;
	speak(&d);
	speak(&c);

	// 4. Pet (or base-class) pointers assigned to each object
	Pet * cPtr = &c; Pet * dPtr = &d;

	// 5. What happens here?
    cout << "\nSection 3: Calling speak(Pet*) through base pointers." << endl;
	cPtr->speak();
	dPtr->speak();

	// 6. How big is each object?
    cout << "\nSection 4: How big is each object?" << endl;
	cout << "\nHere's the sizeof a Pet, Cat, and Dog\n";
	cout << "Pet = " << sizeof(Pet) << endl;
	cout << "Cat = " << sizeof(Cat) << endl;
	cout << "Dog = " << sizeof(Dog) << endl;

	return 0;
}
