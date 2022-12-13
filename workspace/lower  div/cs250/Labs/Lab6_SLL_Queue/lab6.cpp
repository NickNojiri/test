/*
Author: Nicholas Nojiri
date: 10/13/2022
version: 1
name of the project: Queue
*/
#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

//part1
// Definition function push.
// inserts to the back of the queue.
// Should be one statement only.
// Your code here...
void LinkedQueue::push(int value)
{
   if(count == 0)
   {
      ptrToFront = new Node(value, nullptr);
      ptrToBack = ptrToFront;
   }
   else
   {
      ptrToBack->setNext(new Node(value,nullptr));
      ptrToBack = ptrToBack->getNext();
   }
    ++count;
}

//part 2
// Definition function pop.
// deletes the front element.
// Should be one statement only.
// Your code here...
void LinkedQueue::pop()
{
   Node *temp = ptrToFront;
   ptrToFront = ptrToFront->getNext();
   delete temp;
   temp = nullptr;
   --count;
}

//part 3

// Definition function empty
// Returns true if the queue is empty, false otherwise.
// Should be one statement only.
// Your code here...
bool LinkedQueue::empty() const
{
   return (count==0);
}

// Definition function front
// Return the front element of the queue.
// Should be one statement only.
// Your code here...
int LinkedQueue::front() const
{
   return ptrToFront->getData(); 
}
// Definition function back
// Return the rear element of the queue.
// Should be one statement only.
// Your code here...
int LinkedQueue::back() const
{
   return ptrToBack->getData();
}

// Definition function size
// Returns the size of the queue.
// Return value is a size_t.
// Should be one statement only.
// Your code here...
size_t LinkedQueue::size() const
{
   return static_cast<size_t>(count);
}
//end of code