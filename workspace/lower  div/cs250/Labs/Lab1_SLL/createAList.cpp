#include "DoublyList.h"
#include <iostream>

using namespace std;

void DoublyList::createList()
{
    // insert 1 to list
    first = new Node(1, nullptr , first);
    last = first;
    ++count;
    print();
    //part 2
    first->setNext(new Node(2, last, nullptr));
    last = first->getNext();
    ++count;
    print();
    //part 3
    first->setNext(new Node(7,first, last));
    last->setPrev(first->getNext());
	++count;
    print();
    //part 4
    last = last->getPrev();
    delete last->getNext();
    last->setNext(nullptr);
    --count;
    print();
    //part 5
    first->setPrev(new Node(4, nullptr, first));
    first = first->getPrev();
	++count;
    print();
    //part 6
    delete first->getNext();
    first->setNext(last);
    last->setPrev(first);
    --count;
    print();
    //part 7
    last->setNext(first);
    first->setPrev(last);
    first->setNext(nullptr);
    last->setPrev(nullptr);
    first = last;
    last = first->getNext();
    print();
    //part 8

   delete first;
   first = last;
   last->setPrev(nullptr);//bc next is aslo
   --count;
   
}

int main()
{
    DoublyList a;
    a.createList();
    return 0;
}