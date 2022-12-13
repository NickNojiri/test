#include <map>
#include <set>
#include <list>
#include <algorithm>
#include <iostream>
#include "DoublyList.h"
#include <queue>
using namespace std;

//part 1 
void function1(map<int , int>& aMap, const list<int>& aList, set<int>& aSet, int search)
{
   auto found = find(aList.begin(), aList.end(), search); // returns either found or last value
   if(found != aList.end() )// check ^^^
   {
       for(const auto& elem : aList)
       {
          aSet.insert( elem );
       }
       auto iter  = aSet.begin();// a pointer
       for(const auto& elem : aList)
       {
          aMap[*iter] = elem;
          ++iter;
       }
   }
}

//part 2
void DoublyList::binarySearch(queue<int>& aQueue)const
{
   Node* left = first;
   Node* right = last;
   int averageList = count/2;
   while(averageList > 0 )
   {
      aQueue.push(left->getData());
      aQueue.push(right->getData());
      left = left->getNext();
      right = right->getPrev();
      --averageList;
   }
   if(count % 2 == 1)
   {
      aQueue.push(left->getData());
   }
}
