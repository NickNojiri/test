//	An abstract base class
#include <iostream>
#include "pets.h"
using namespace std;

int main()
{
    // 1. Objects of each class
    //Pet	p; //	Cannot create a Pet object
    Cat	c;
    Dog	d;
    Elephant e;

    // 2. Pointers Pets assigned to each object
    Pet *	cPtr = &c;
    Pet *	dPtr = &d;

    // 3. What happens here?
    cout << "2 Pet pointers \"speak()ing\"" << endl;
    cPtr->speak();
    dPtr->speak();

    return 0;
}
