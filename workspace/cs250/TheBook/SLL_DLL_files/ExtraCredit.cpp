#include <vector>
using namespace std;

#include <iostream>

//part 1
void functonVectorOne(vector<int>& vectorOne){
   int size = vectorOne.size()-*vectorOne.data();
   int value = *(++vectorOne.rbegin());
   vector<int>::iterator pos = vectorOne.begin();
   vectorOne.insert(pos,size, value);
}
//insert() – It inserts new elements before the element at the specified position
   // cout<< *vectorOne.data();returns the first value of the vector
 
  /* 
  Testing Main.cpp
    (functionVectorOne) -------------------------------------------

        vectorOne is: 5 2 9 8 4 1 6 
        Function runs...
        Expected output: 1 1 5 2 9 8 4 1 6
            Your output: 1 1 5 2 9 8 4 1 6 
        pass
  
Syntax:
   vector_name.insert (position, val)
      Parameter: The function accepts two parameters specified as below:
      position – It specifies the iterator which points to the position where the insertion is to be done.
      val – It specifies the value to be inserted.
      
   vector_name.insert(position, size, val)*we are using this syntax as it is the can reduce the lines of code*
      Parameter: The function accepts three parameters specified as below:
      position – It specifies the iterator which points to the position where the insertion is to be done.
      size – It specifies the number of times a val is to be inserted at the specified position.
      val – It specifies the value to be inserted.
      
   vector_name.insert(position, iterator1, iterator2)
      Parameter: The function accepts three parameters specified as below:
      position – It specifies the position at which insertion is to be done in the vector.
      iterator1 – It specifies the starting position from which the elements are to be inserted
      iterator2 – It specifies the ending position till which elements are to be inserted
            



*/

   
//part 2
void functionVectorOne(vector<int>& vectorTwoA, vector<int>& vectorTwoB)
{
    //insert
vector<int>::iterator pos = vectorTwoB.begin();
int value = *++vectorTwoB.begin() / *vectorTwoB.begin();
vectorTwoB.insert(pos,value);
}
/*(functionVectorOne) -------------------------------------------

vectorOne is: 5 2 9 8 4 1 6 
Function runs...
Expected output: 1 1 5 2 9 8 4 1 6
    Your output: 1 1 5 2 9 8 4 1 6 
pass
Testing Main.cpp

(functionVectorTwo) -------------------------------------------

vectorTwoA is: 1 2 3 4 5 6 
vectorTwoB is: 10 20 30 40 
Function runs...
Expected output vectorTwoA: 1 2 3 4 5 6
               Your output: 1 2 3 4 5 6 
Expected output vectorTwoB: 2 10 20 30 40
               Your output: 2 10 20 30 40 
pass
Score

1/1
*/

void functionVectorThree(vector<int>& vectorThree)
{
    //Restrictions Must use vector::insert()
    int value = vectorThree[*vectorThree.data()]+*vectorThree.begin();//5 infinatly many ways
    vector<int>::iterator pos = vectorThree.begin();
    vectorThree.insert(pos,value);
}
/*
Syntax: 

   vectorname.at(position)
      Parameters: 
      Position of the element to be fetched.
      Returns: 
      Direct reference to the element at the given position.
2:
   vectorname1.swap(vectorname2)
      Parameters:
      The name of the vector with which
      the contents have to be swapped.
      Result: 
      All the elements of the 2 vectors are swapped.
3:      
   Errors and Exceptions  
      It throws an error if the vector is not of the same type.
      It has a basic no exception throw guarantee otherwise.

*/

void functionVectorFour(vector<int>& vectorFour)
{
    vector<int>::iterator pos = vectorFour.begin();
    vectorFour.assign(*++pos, *pos);
}
/*
Testing Main.cpp
(functionVectorFour) -------------------------------------------

vectorFour is: 6 5 4 3 2 9 
Function runs...
Expected output: 6 6 6 6 6
    Your output: 6 6 6 6 6 
pass
Score

1/1
Time Complexity – Linear O(N)
The syntax for modifying values from a vector 

Syntax:
    vectorname.assign(InputIterator first, InputIterator last) 

        Parameters: 
            first - Input iterator to the initial position range.
            last - Input iterator to the final position range.
2:
vectorname.assign(arr, arr + size)

Parameters: 
arr - the array which is to be assigned to a vector
size - number of elements from the beginning which has to be assigned.
3:
vectorname.assign((initializer_list)
Parameter: initializer_list
*/