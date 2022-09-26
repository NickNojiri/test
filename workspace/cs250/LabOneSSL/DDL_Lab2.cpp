#include "DoublyList.h"
#include <iostream>
#include <iomanip>
using namespace std;


// Part 1
bool DoublyList::search(int key)
{
    // assumption count != 0
    bool result = false ;
    int loopCounter = 0 ;
    Node *current = first;
    if(count == 0)
    {
        cerr<<"error NO values in the list ";
    }
    while( loopCounter < count ) // no use of references for the while loop to reduce function calls
    {
        if( key == current->getData() ) // check
        {
            result = true; // found
        }
        current = current->getNext(); // next node
        ++loopCounter; // increment loop counter
    }
    return result; //return true if found
}

// Part 2
void DoublyList::swapList(DoublyList& toList)
{
    //swap the first address and the last
    // Assume parameter object is empty.
    // Do NOT assume calling object is empty.
    // Do nothing if calling object is empty.
    if(count != 0)
    {
        Node *tempFirst = first;
        Node *tempLast = last;
        int tempCount = count;

        first = toList.first;
        last = toList.last;
        count = toList.count;

        toList.first = tempFirst; //copy first Original to toList
        toList.last = tempLast; //copy last Original to toList
        toList.count = tempCount;   //copy count Original to toList

        
    }
       
}

// Part 3
void DoublyList::insertInOrder(int newData)
{

    //first case: empty list
    if(count == 0)
    {
        first = new Node( newData, nullptr ,first ); // Node(data to insert, prev , next)
        //first->getNext()->setPrev(first); // [nullptr]->first->[ wasFirst]->[ ]
        last = first;
        ++count; //add to count1
    }
    else if( first->getData() >= newData)
    {
        first->setPrev(new Node( newData, nullptr ,first ));  // Node(data to insert, prev , next)
        //first->getNext()->setPrev(first); // [nullptr]->first->[ wasFirst]->[ ]
        first = first->getPrev();
        ++count;
    }

    //third case: insert last:
    else if ( last->getData() <= newData )
    {
        last->setNext( new Node( newData, last, nullptr ) );
        //last->getPrev()->setNext(last); // [prev->setNext-->]<-->[last]
        last = last->getNext();
        ++count;

    }
    //this is the current case I am working on and have had trouble with

    //3)insert middle:
    else
    {
        Node *pNode = first;
        Node *pNodePrev = nullptr;
        while (pNode->getData() < newData && pNode != nullptr ) //exit it location found
    // I know this statment will not hit nullptr bc there is
    //atleast one value in p->getData() that is both greater than newData and less than newData if == insert
        {
            pNodePrev = pNode;
            pNode = pNode->getNext();
        }
        if (pNodePrev == nullptr)
        {
            first->setPrev(new Node( newData, nullptr ,first ));  // Node(data to insert, prev , next)
            //first->getNext()->setPrev(first); // [nullptr]->first->[ wasFirst]->[ ]
            first = first->getPrev();
            ++count;
        }
        else
        {
            Node *insert = new Node( newData, pNodePrev ,pNode); // you need to make a new address for the element to be inserted allocate the space for the new node
            pNodePrev->setNext(insert);
            pNode->setPrev(insert);
            ++count;
        }
    //this where we insert since it exits when we find the right place
        //pNode= new Node( newData, pNode->getPrev(), pNode-> getNext() );// [p] <-[pNode]-> [n]
        // pNode->getNext->setNext( pNode );
        
        //pNode
        // pNode->getPrev()->setNext( pNode ); //[p]"->-<-"[pNode]-> [n]
        //pNode->getNext()->setPrev( pNode ); //[p]->-<-[pNode]"->-<-"[n]
        
    }
}

void DoublyList::print(){
    Node *current = first;
    while(current != nullptr){
        cout << current->getData() <<" ";
        current = current->getNext();
    }
    cout << "count : " << count << "end of list"<< endl;

}

//testing function
int main()
{
    int userInput = 0;
    DoublyList a, b, c;
//list a  7 elements 0 ,1 , 3, 2 ,10 , 7, 99
    a.insertInOrder(0);
    a.insertInOrder(1);
    a.insertInOrder(3);
    a.insertInOrder(2);
    a.insertInOrder(10);
    a.insertInOrder(7);
    a.insertInOrder(99);
//list b 2 elemtents 2, 10;
    b.insertInOrder(2);
    b.insertInOrder(10);
    
    while( userInput != 99)
    {        
        cout << "Emter a number to add to the list";
        cout << "Enter 99 to exit..." << endl;
        cin >> userInput;
       
        
        c.insertInOrder( userInput );
        

    }
    

   cout << "if 32 is in the list of a then you will be greeted" << endl;
   if(a.search(32) )
   {
     cout <<+"hello";
   }// if hello prints then search works fine
   // compear results of the swap
    cout <<"list a"<< endl;
    a.print();
    cout <<"list b"<< endl;
    b.print();
    cout <<"list c"<< endl;
    c.print();
    cout <<endl;
    cout <<"we shall swap a with b"<< endl;
    a.swapList(b);
    cout << "and then We shall swap c with a" << endl;
    cout <<endl;
    c.swapList(a);
    cout <<"list a"<< endl;
    a.print();
    cout <<"list b"<< endl;
    b.print();

    cout<< "these are the result"<< endl;
    cout <<endl;
    cout <<"list a"<< endl;
    a.print();
    cout <<"list b"<< endl;
    b.print();
    cout <<"list c"<< endl;
    c.print();
    
    return 0;  
}