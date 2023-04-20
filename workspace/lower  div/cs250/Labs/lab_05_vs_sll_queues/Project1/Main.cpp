/*
*	Nicholas, Nojiri
*
*	April 30, 2023
*
*	CS A250
*	Lab5
*/

#include "LinkedQueue.h"

#include <iostream>
using namespace std;

int main()
{
    LinkedQueue myQueue;
    for (int i = 1; i <= 100; ++i) {
        myQueue.push(i);
        cout << "(" << myQueue.front() << ", " << myQueue.back() << ")";
    }
    // Print out the queue elements
    while (!myQueue.empty())
    {
        cout << "(" << myQueue.front() << ", " << myQueue.back() << ")";
        if (myQueue.front() % 10 == 0)
        {
            cout<< endl << "congrats on winnging a new car!!!";
        }
        myQueue.pop();
    }
    cout << myQueue.front() << " ";

    return 0;
}

