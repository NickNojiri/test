/**
 *  @file countmatches.cpp
 *  @author your name
 *  @version section and date
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // put your Canvas ID here

/**
 * Write the function named countMatches().
 *
 * Write a function named countMatches that accepts a
 * string to match (as const char *), an array of strings (as const char*[]),
 * and the size of the array (as size_t), and returns the number of
 * strings in the array that contain the string to match as a substring.
 *
 * For example, if strs is defined as
 *  const char * strs[] = {"rainbow", "sunshine", "bowtie", "cow", "ow", "happy"};
 * then the call countMatches("ow", strs, 6) returns 4.
 *
 * The empty string is a substring of any string.
 * You may assume that the size argument correctly represents the size
 * of the array, and that the match string is not a nullptr.
 *
 * Do not use any functions from the standard library.
 *
 */
bool contains(const char *s1,const char *s2){
    if(*s2 == '\0'){return true;}
    while(*s1 != '\0'){
        auto p1 = s1, p2 = s2;
        
        while(*p1 && *p2 && ( *p1==*p2) )
        {
            p1++;
            p2++;
        }
        if(*p2 =='\0'){return true;}
        s1++;

    }
    return false;
}

int countMatches(const char * word , const char * strs[] , size_t  len )
{
    int count=0;
    for(size_t i=0; i < len ; ++i)
    {
        if(contains(strs[i], word)) count++;
        
    }
    return count;
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
