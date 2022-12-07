/*
author:Nick Nojiri
date:September 7, 2022
version:1
assignment:Code Check lab1:SSL
Total Lines of code: 98
*/

#include "AnyList.h"

#include <iostream>
using namespace std;

// Part 1
int AnyList::getLastElem() const
{
   //first case of the function the empty set
   if(count == 0){
      cerr<<"The list is empty.\n";
      return 0;// zero is to satisfiy the int return type
   }
   Node* last = ptrToFirst;
   for(int i = 0; i < count; ++i)
   {
      last = last->getPtrToNext();
   }
   return last->getData();
}
   // to solve this program i shall use 2 addresses in memory and itter till the next value hits null ptr
/* Node* current = ptrToFirst;
   Node* next = current->getPtrToNext(); 
   while(next != nullptr)
   {
      current = current->getPtrToNext();
      next = next->getPtrToNext();// trailing value
   }
   //static memory no use for delete()
   return current->getData();
}*/


// Part 2
bool AnyList::allOdds() const
{
   //base case1 {}
   if(count == 0 ){
      cerr<<"The List is empty";
      return false;
   }
   bool result;
   Node* current = ptrToFirst;
   while(current != nullptr){
      if(current->getData() % 2 == 0){
         result = false;// return
         break;
      }
      if(current->getPtrToNext() == nullptr){// quick peek
         result = true;
      }
      current = current->getPtrToNext();
   }
   return result;
   
}

// Part 3
void AnyList::deleteFirstNode(){
   if(count == 0){
      cerr<< "Cannot delete from an empty list.\n";
   }
   else{
      Node* current = ptrToFirst;
      
      ptrToFirst = ptrToFirst->getPtrToNext();
      delete current;
      current = nullptr;
      --count;
   }
}

// Part 4
 bool AnyList::compareLists(const AnyList& otherList) const // the const modifier in the function call because we do not want mutation to occur
{
   bool result= true;// use of result variable to keep my code readable
   if( count != otherList.count ){
      result = false;// must be true
   }// if
   else{
      Node* current = ptrToFirst;// initialize the staring point on the original list
      Node* otherCurrent = otherList.ptrToFirst;// starting point for the other list
      while(current != nullptr){
         if(current->getData()!= otherCurrent->getData()){// compare data
            result = false;
            break;
         }
         current = current->getPtrToNext();// next
         otherCurrent = otherCurrent->getPtrToNext();// next
      }
      if(current == nullptr){// Because of our assumption we know the list is not a empty list. So nullptr must a value that means we exited the loop with completion as in turring complete return 00
         result = true;
      }
   }// else
   return result;
}