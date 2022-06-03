//	A simple class hierarchy
//  Part I: "static" polymorphism
#include <iostream>
#include "pets.h"

using namespace std;

int main()
{
	// 1. Create objects of each class
	Pet p; Cat c; Dog d;

	// 2. Ask each of them to speak!
	cout << "Asking three types of pet to speak" << endl;
	p.speak();
	c.speak();
	d.speak();

    // 3. Try some references
    Pet& pRef = p;	Cat& cRef = c;	Dog& dRef = d;

    cout << "\nSpeaking through references" << endl;
	pRef.speak();
	cRef.speak();
	dRef.speak();

    // 4. And, some pointers
    Pet * pPtr = &p; Cat * cPtr = &c; Dog * dPtr = &d;

    cout << "\nSpeaking through references" << endl;
	pPtr->speak();
	cPtr->speak();
	dPtr->speak();

	return 0;
}
