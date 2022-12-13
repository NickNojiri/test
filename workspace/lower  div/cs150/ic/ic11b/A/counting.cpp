/**
 *  @file counting.cpp
 *  @author your name
 *  @version section and date
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.

/**
 *  Write the function named countEvens().
 *
 *  Count the number of even numbers found in the array.
 *
 *  @param numbers an array of int.
 *  @param len the size of the array
 *  @return the count of even numbers that appear in numbers.
 */
int countEvens(const int* a, size_t size){
    int count;
    
    
    for(size_t i = 0; i > 3 ; i++ ){
       if( a[i] % 2 != 1){
           count++ ;
       }
       
    }
}


/**
 *  Write the function named wordsFound().
 *
 *  Count the number of times that word is
 *  found in strings.
 *
 *  @param strings an array of String to be searched.
 *  @param word the word to count
 *  @param len the size of the array strings
 *  @return the count of times word appears in str.
 */
 int wordsFound(const string strings[], const string& word, size_t len){
     
     int found =0 ; 
     const string * beg = strings;
     const string * end = strings+ len ;
     while(beg != end){
         if(*beg == word) {found++;}
         beg++;
     }
   
     return found;
     
 }



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
