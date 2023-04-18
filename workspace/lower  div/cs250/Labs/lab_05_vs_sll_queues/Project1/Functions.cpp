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

// Definition function push
void LinkedQueue::push(int a) 
{
	if (count > 0)
	{
		ptrToFront->setNext(new Node(a,ptrToFront));
		ptrToFront = ptrToFront->getNext();
		++count;
	}
	else 
	{
		ptrToFront = new Node(a,nullptr);
	}
}

// Definition function pop
void LinkedQueue::pop()
{

	if( ptrToFront != nullptr )
	{
		Node* temp = ptrToFront;
		ptrToFront = ptrToFront->getNext();
		delete temp;
		temp = nullptr;
	}
	else 
	{
		cerr << "Empty";
	}
}
// Definition function empty

bool LinkedQueue::empty() const 
{
	return (ptrToFront == nullptr ? true : false);
}

// Definition function front
int LinkedQueue::front() const
{
	return ptrToFront->getData();
}

// Definition function back
int LinkedQueue::back() const
{
	return ptrToBack->getData();
}

// Definition function size
size_t LinkedQueue::size() const 
{
	return count;
}