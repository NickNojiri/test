/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
/**
 * Converts an integer to its equivalent Roman digit.
 * @param n value of this digit
 * @param ones Roman symbol for ones
 * @param fives Roman symbol for ones
 * @param tens Roman symbol for tens
 * @return the Roman digit as a string.
 */
string digit(int n, const string& symbols)
{
    string result;
    return result;
}

/**
 * Converts an Arabic number to its Roman equivalent.
 * @param n the number to convert.
 * @return a string reprenting the Roman numeral.
 *
 * @pre the number must be a positive number in range.
 * @post if the number cannot be converted it return an error message
 */
string toRoman(int n)
{
    
    string result ;
    if (n <= 0) {result = "ERROR: none";}
  
    while (n >= 1000) {
        // has 1000 place
        result += "M";
        n -= 1000;
        // this for each value with a roman numberial
    }
    if (n >= 900) 
    {
        result += "CM"; 
        n -= 900;
        
    }
    if (n >= 500) {
        result += "D"; 
        n -= 500;
        
    }
    if (n >= 400) {result += "CD"; n -= 400;}
    while (n >= 100) {result += "C"; n -= 100;}
    if (n >= 90) {result += "XC"; n -= 90;}
    if (n >= 50) {result += "L"; n -= 50;}
    if (n >= 40) {result += "XL"; n -= 40;}
    while (n >= 10) {result += "X"; n -= 10;}
    if (n >= 9) {result += "IX"; n -= 9;}
    if (n >= 5) {result += "V"; n -= 5;}
    if (n >= 4) {result += "IV"; n -= 4;}
    while (n >= 1) {result += "I"; n -= 1;}
    return result;

}

/**
 * Converts individual decimal digit to Roman.
 * These are inline functions (already written.)
 */




/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}