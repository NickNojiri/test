/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h12.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

// Write your function here

 void strip(){
        char c;
        bool inSingle = false, inMulti = false, inStr = false;

        while(cin.get(c))//cin.get(c) will work untill there are no more char to read;
        {
            if(inSingle && c == '\n'){ inSingle = false; }
            else if(inStr && c == '\\' && cin.peek() =='"')//escape quote
            {
                cout.put(c);//this is to echo the c
                cin.get(c);// this is to get the next
            }
            
            else if(inStr && c == '"'){inStr = false;  }
            
            else if(inMulti && c == '*'&& cin.peek()=='/' )//cin.peek is next char in the list
            {
                inMulti = false;
                cin.get(c);
                cin.get(c);
                //removes the last 2 chars
            }
            else if(!inStr && !inSingle && !inMulti){// sets the conditon for the statement

                if(c== '"'){inStr = true;}
                else if(c == '/' && cin.peek()=='*'){inMulti = true;}
                else if(c=='/' && cin.peek()=='/'){inSingle = true; }

            }
            if(cin && !inSingle && !inMulti){
                cout<< c;
            }
        }//end of the loop
    }

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;


    return 0;
}