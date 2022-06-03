/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h08.h"

// Put your function implementation (definitions) in this file
/**
   Computes a barcode given a 5-digit zip code.
   @param zip the 5-digit zip code.
   @return the bar code with | for full bars and : for half bars.
 */
string barCode(int zip)
{
  {
   //while (zip!= 0)
   //string bar = codeForDigit(zip % 10)
   
   // string bar = codeForDigit(zip % 10);
   //  zip = zip / 10;
   //     bar = codeForDigit(zip%10) + bar;
   //     zip = zip / 10;
   //     bar = codeForDigit(zip%10) + bar;
   //     zip = zip / 10;
   //     bar = codeForDigit(zip%10) + bar;
   //     zip = zip / 10;
   //       bar = codeForDigit(zip%10) + bar;
        
   //     int check = checkDigit(temp);
   //     bar = bar + codeForDigit(check);
   string bar;
   int c = 1 ;
   while(c <= 5 )
   {
       bar =codeForDigit(zip % 10) + bar;
       zip = zip /10;
       c++;
   }
   string result = "|" + bar + "|";
    return result ;
    }
}

/**
   Returns the bar code value for a given digit.
   @param digit integer
   @return string encoding of the digit
*/
string codeForDigit(int digit)
{
  if(digit == 0){
return "||:::";}
else if (digit == 1){
return ":::||";}
else if (digit == 2){
return "::|:|";}
else if (digit == 3){
return "::||:";}
else if(digit == 4){
return ":|::|";}
else if(digit == 5){
return ":|:|:";}
else if (digit == 6){
return ":||::";}
else if (digit == 7){
return "|:::|";}
else if(digit == 8){
return "|:::|";}
else if(digit == 9){
return "|:|::";}
else{
return "Invalid";}

   
    
}
/**
 * Calculates the check digit for a zip code.
 * @param zip the zip code
 * @return check digit for zip according to this rule.
 *
 * Sum all the digits in the zip code.
 */
 
int checkDigit(int zip)
{
    int result;
    int sum = 0;
        while(zip>0)
        {
            sum +=zip % 10;
            zip/=10;
        }
        result = (10 - sum % 10) % 10;
   
    return result   ;
}

/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
    // You can add code that "runs" here
    return 0;
}