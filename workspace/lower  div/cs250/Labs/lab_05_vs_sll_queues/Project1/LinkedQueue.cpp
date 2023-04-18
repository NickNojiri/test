/*
*	Nicholas, Nojiri
*
*	April 30, 2023
*
*	CS A250
*	Lab5
*/

#include "LinkedQueue.h"

#include<iostream>
using namespace std;

void LinkedQueue::clearQueue()
{ 
    Node  *temp; 
	
	while (ptrToFront != nullptr)
    {
		temp = ptrToFront;
		ptrToFront = ptrToFront->getNext();
        delete temp;
		temp = nullptr;
		--count;
    }
	ptrToBack = nullptr;
	count = 0;
}

LinkedQueue::~LinkedQueue()
{
	clearQueue();
}
