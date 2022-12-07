#include "DoublyList.h"
#include <iostream>

using namespace std;

void DoublyList::createList()
{
    // insert 1 to list
    first = new Node(1, nullptr , first);
    last = first;
    ++count;
    //part 2
    first->setNext(new Node(2, last, nullptr));
    last = first->getNext();
    ++count;
    //part 3
    first->setNext(new Node(7,first, last));
    last->setPrev(first->getNext());
	++count;
    //part 4
    last = last->getPrev();
    delete last->getNext();
    last->setNext(nullptr);
    --count;
    //part 5
    first->setPrev(new Node(4, nullptr, first));
    first = first->getPrev();
	++count;
    //part 6
    delete first->getNext();
    first->setNext(last);
    last->setPrev(first);
    --count;
    //part 7
    last->setNext(first);
    first->setPrev(last);
    first->setNext(nullptr);
    last->setPrev(nullptr);
    first = last;
    last = first->getNext();
    //part 8

   delete first;
   first = last;
   last->setPrev(nullptr);//bc next is aslo
   --count;
}