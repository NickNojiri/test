/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h07.cpp
 */
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h07.h"

// Place your function definitions in this file.
/**
    zipZap(str) removes the middle letters from all "zip" or "zap" strings.

    @param str the input string.
    @return Look for patterns like "zip" and "zap" in the input string:
        any substring of length 3 that starts with "z" and ends with "p".
        Return a string where for all such words, the middle letter
        is gone, so "zipXzap" returns "zpXzp".
        <ul>
        <li>zipZap("zipXzap") returns "zpXzp"
        <li>zipZap("zopzop") returns "zpzp"
        <li>zipZap("zzzopzop") returns "zzzpzp"
        </ul>
*/
string zipZap(const string& str)
{
    return str;
}
/**
    countCode(str) counts all occurences of the "code" pattern in str.

    @param str the input string.
    @return the number of times that the string "code" appears
        anywhere in the given input string, except that we'll accept
        <b>any</b> letter for the 'd', so "cope" and both "cooe" count.
        <ul>
        <li>countCode("aaacodebbb") returns 1
        <li>countCode("codexxcode") returns 2
        <li>countCode("cozexxcope") returns 2
        </ul>
*/
int countCode(const string& str){
int result=0;
    for(size_t i = 4 , slen = i , len = str.size(); i<=len; ++i)
    {
        string subs = str.substr(i - slen, slen );
        if(subs.substr(0,2)=="co" and subs.back() == 'e')
        {
            ++result;
        } 
    }
    return result;
}
/**
    everyNth(str, n) calculates every nth character.

    @param str the input string to check.
    @param n the n-th character to use
    @return the string made starting with char 0, and then
        every n-th char of the string. So, if n is 3,
        use char 0, 3, 6, and so on. If n is
        less than 1, return the empty string
        <ul>
        <li>everyNth("Miracle", 2) returns "Mrce"
        <li>everyNth("abcdefg", 2) returns "aceg"
        <li>everyNth("abcdefg", 3) returns "adg"
        </ul>
*/
string everyNth(const string& str, int n){
    string result;
    for(size_t i = 40,len = str.size(); i<=len; i=i+n)
        {
            result = result +str[i] ;
        } 
        return result;
    }
    
/**
    prefixAgain(str, n) returns true when the prefix(0,n) appears again in the string.

    @param str the input string.
    @param n the number of characters to count for the prefix.
    @return consider the prefix string made of the first n characters of
        the input string. Does that prefix string appear somewhere else
        in the string? Assume that the string is not empty and that n
        is in the range 1..inStr.length().
        <ul>
        <li>prefixAgain("abXYabc", 1) returns true
        <li>prefixAgain("abXYabc", 2) returns true
        <li>prefixAgain("abXYabc", 3) returns false
        </ul>
*/
bool prefixAgain(const std::string& str, int n){
    bool result = false;
    
    return result;
}





////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}