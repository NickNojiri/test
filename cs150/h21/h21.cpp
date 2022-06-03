/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h21.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h21.h"

// Add your code here

void composite( unsigned char * const bg,
                unsigned char * const fg,
                int width, int height){
                    greenScreen(fg, width, height);
                unsigned char * dest =fg; 
                unsigned char * src = bg ;
                auto const * end = fg + width * height * 4 ; 
                while(dest != end ){
                    if(*dest == 0 && *(dest+ 1) == 0 && *(dest + 2)== 0 && *(dest + 3)==0){
                        *dest = *src;
                        *(dest+ 1)= *(src+ 1);
                        *(dest+ 2)= *(src+ 2);
                        *(dest+ 3)= *(src+ 3);
                    }
                    dest+= 4;
                    src += 4; 
                }
                    
                }
                



/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Add your own testing code here

    return 0;
}