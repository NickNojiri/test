#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_
#include "stdlib.h"
class Node
{
public:
    Node() : data(0), next(nullptr) {}
    Node(int theData, Node *newNext) : 
        data(theData), next(newNext){}
    Node* getNext() const { return next; }
    int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
    void setNext(Node *newNext) { next = newNext; }
    ~Node(){}
private:
    int data;        
    Node *next;    //pointer that points to next node
};

class LinkedQueue
{
public:
    LinkedQueue();
    void clearList();
    ~LinkedQueue();

    /**************************************** 
       Functions you will be implementing:
          push
          pop
          empty
          back
          front
          size

    ****************************************/
   void push(int value) ;
   void pop();
   bool empty()const;
   int back()const;
   int front()const;
   size_t size()const; 
private:
    Node* ptrToFront;    
    Node* ptrToBack;
    int count;
};
#endif