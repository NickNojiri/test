/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h32.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID


#include "h32.h"

// Add your code here

void fill(const Pixel& color);

    // New for this exercise
    /**
     * Rotates an image in both the dx and dy directions.
     * Pixels wrap around as required.
     * @param dx the amount to shift in the x dimension.
     * @param dy the amount to shift in the y dimension
     * Assume 4 bits per pixel
     */
void Image::translate(int dx, int dy){
    
    // this is a hard function using 
    //
    Image& img = *this;
    int countx = 1;// starts with 1
    int county = 0;
    
    if(dx < 0){
        dx= width()  - abs(dx) % width();
    }
    else{
        dx=dx%width();
    }
    if(dy < 0){
        dy = height() -abs(dy) % height();
    }
    else{
        dy = dy % height();
    }
    
    for(size_t row= 0 ; row< height();row++)
    {
        for(int i =1 ; i <= dx ; i++)
        {
            int last = ((row+1)*width())-1;//math areacool
            Pixel temp(m_pixels.at(last));
            for(size_t col = width()-1; col >0  ; col--)
            {
                int index = row * width() +col;
                 m_pixels.at(index) = m_pixels.at(index -1);
            }
            m_pixels.at(row*width())= temp;
            countx++;
        }
    }
    size_t lastRow = m_width* (m_height-1); // auto??
    while(county < dy){
        for(unsigned int col = 0 ; col < m_width; ++col){
            auto temp2 = img[lastRow +col];
            for(auto row = m_height - 1; row > 0 ; --row){
                img[row * m_width + col] = img[(row-1) * m_width + col];
            }
            img[col] = temp2;
        }
        county++; 
    }
}
    
    

    /**
     * Overloaded subscript operators.
     * @param idx index from 0 < size
     * @throws out_of_range if invalid index
     */
    const Pixel& Image::operator[](unsigned idx) const{
        return m_pixels.at(idx);
    }
    Pixel& Image::operator[](unsigned idx){//uisn mem.at
        return m_pixels.at(idx);
    }



/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;
    // this shit animates things
    
    return 0;
}