/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h06.cpp
 */
#include <string>
#include <cctype>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Add your function here
int sumNums(const string& str){
    int result = 0;
	int digit;
	int num = 0;
	int sum = 0;
	for(size_t i = 0 , len{str.size()}; i<=len ; i++){
	    if(isdigit(str[i])==true){
	    
	        digit =(str[i]-'0');
	        num = num*10;
	        num = num +digit;
	       
	    }
	    else{
	        sum = sum +num;
	        num=0;
	    }
	    
	}
	
	result = sum;
	
	return result;
}




/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

    return 0;
}


