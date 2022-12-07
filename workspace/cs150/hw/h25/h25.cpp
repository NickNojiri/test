/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
/**
 * Reverses the C-style string pointed to by s.
 *
 * @param s a pointer to the character in a C-style string.
 */
void reverse(char * s)
/**
 * Finds the first occurrence of str2 which appears in str1.
 * Returns a pointer to the first occurrence of str2 in str1.
 * If no match is found, then a null pointer is returned.
 * If str2 points to a string of zero length, then the argument str1 is returned.
 *
 * @param str1 C-string to search through.
 * @param str2 C-string to search for.
 * @return
 */
 {
     int i = 0;
     auto *beg = s;
     auto *end =s;
     while(*end){ end++;}// gives me end with bool loop
     end= end -1;// puts the value back to the end not one past the end
     while (beg< end){
         auto temp = * beg;
         *beg = *end;
         *end = temp;
         beg++;
         end--;
     }
 }// lol it says i copied but tbh i think this is the most readable code so idc
 
 
const char * findStr(const char *str1, const char *str2){
    if(*str2=='\0'){return str1;}// if str2 is empty return str1
    while(*str1){
        const char * p = str1;
        const char * p1 = str2;
        // re
        bool found = true;
        while(*p && *p1){
            if(*p!= *p1){found =false; break;}// scr to dest find error return error
            p++;//itter inner loop
            p1++;//ttr loop
        }
        if(found)return str1;
        str1++;//itr outter loop
    }
    if(true)return nullptr;
}
// cant return '\0' or ' ' bc const * char;


//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}