#ifndef STANDARD_TEMPLATE_LIBRARY_H_
#define STANDARD_TEMPLATE_LIBRARY_H_
#include <vector>
#include <iostream>
#include <list>
using namespace std;
//
//@param vector<int>& currentSuitors set of suitors
//@param list<int>& eliminated
//@return the winning suitor
int processSuitors(vector<int>& currentSuitors, list<int>& eliminated)
{
   int winner = 1;
   int size = currentSuitors.size();
   int i = 0;
   
   // 1 2 3 4 5 6
   //     X 
   
   while(size > 1)
   {
      i=(i+2)%size;
      eliminated.push_back(currentSuitors[i]);
      currentSuitors.erase(currentSuitors.begin()+i);
      --size;
   }
   /*
   //while loop or recurtion can solve i think they are the same time complexity
   if(size=1)
   {
      return winner;
   }
   else
   {
      //delete 3rds n/3
      // ee nee mii nee moo
      //123456 del(3) start @ 4 del(6) start @ 1 del(4) start @ 5 del(2) start 5 del(1)
      //find first 3d element  delete
      return processSuitors()
   }
   */
   
   /*
   while()//size!=1
   {
      count +3
      //store delete element in list
      //update suitor vector
      
      
      
   }
   */
   return currentSuitors[0];
   
}
#endif