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
//front->[]->[]->back
// front->[]->[back]->//back
// Definition function push
void LinkedQueue::push(int a) 
{
	if (count > 0)
	{
		ptrToBack->setNext(new Node(a,nullptr));
		ptrToBack = ptrToBack->getNext();
		
	}
	else 
	{
		ptrToBack = new Node(a,nullptr);
		ptrToFront = ptrToBack;
	}
	++count;
}

// Definition function pop
void LinkedQueue::pop()
{

	if( count != 0 )
	{
		Node* temp = ptrToFront;
		ptrToFront = ptrToFront->getNext();
		delete temp;
		temp = nullptr;
		--count;
	}
	else 
	{
		cerr << "Empty";
	}
}

// Definition function empty
bool LinkedQueue::empty() const 
{
	return (count == 0);
}

// Definition function front
int LinkedQueue::front() const
{
	if (ptrToFront != nullptr)
	{
		return ptrToFront->getData();
	}
	else
	{
		std::cerr << "Queue is empty." << std::endl;
		return 0;
	}
}

// Definition function back
int LinkedQueue::back() const
{
	if (ptrToBack != nullptr)
	{
		return ptrToBack->getData();
	}
	else
	{
		std::cerr << "Queue is empty." << std::endl;
		return 0;
	}
}

// Definition function size
size_t LinkedQueue::size() const 
{
	return count;
}