/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h22.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h22.h"

// Add your code here

void mirror(UC* const img, int width, int height, Direction dir)
{
    
    if(dir == Direction::LtoR || dir == Direction::RtoL){// left to right
        for(int row = 0 ; row < height ; row++)
        {
            Pixel * front ; 
            front = reinterpret_cast<Pixel * > (img) + row * width;
            auto back = front + width -1; // find the len of var back
            while(front < back){
                
                if(dir == Direction::LtoR){*back= * front ;}//swap() funtltoR back-> nullptr
                else if(dir == Direction::RtoL){*front = *back;}//swap() the other wayRtoL
                front++; back--;//itr loop ----><----
                
            }
        }
    }
    
    // the other dir is top to bottom or bottom to top
    else if(dir == Direction::TtoB || dir == Direction::BtoT){// second part of the function BtoT or TtoB
        for(int col = 0 ; col <= width-1 ; col++){
            
            Pixel * top; // top ->Pixel
            top = reinterpret_cast<Pixel * > (img)+col;// find the top values
            auto bottom = top +width* (height-1);// last value large
            
            while(top < bottom){
                if(dir == Direction::TtoB){*bottom = *top;}
                else if(dir == Direction::BtoT){*top= *bottom;}
                top+=width; bottom-=width; // moves up n down
            }
        }
    }
    
}

void flip(UC* const img, int width, int height, Direction dir)
{
    if(dir == Direction::LtoR || dir == Direction::RtoL){// left to right
        for(int row = 0 ; row < height ; row++)
        {
            Pixel * front ; 
            front = reinterpret_cast<Pixel * > (img)  + row * width;
            auto back = front + width -1; // find the len of var back
            while(front< back){
                auto temp = *front;
                *front = *back;//swap() the other wayRtoL
                *back = temp;
                front++; back--;//itr loop ----><----
                
            }
        }
    }
    // the other dir is top to bottom or bottom to top
    else if(dir == Direction::TtoB || dir == Direction::BtoT){// second part of the function BtoT or TtoB
        
        for(int col = 0 ; col < width ; col++){
            Pixel * top; // top ->Pixel
            top = reinterpret_cast<Pixel * > (img)+col;// find the top values
            auto bottom = top +width* (height-1);// last value large
            
            while(top < bottom){
                auto temp = *top;
                *top = *bottom; 
                *bottom = temp;
                
                top+=width; bottom-=width; // moves up n down
            }
        }
    }
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}