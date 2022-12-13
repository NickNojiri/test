/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file grayscale.cpp
 */
#include <string>
#include <iostream>
using namespace std;

#define STB_IMAGE_IMPLEMENTATION        // REQUIRED (loading)
#define STB_IMAGE_WRITE_IMPLEMENTATION  // (writing)
#include "stb_image.h"                  // "header-only" C libraries
#include "stb_image_write.h"            // writing files


// This is a type alias
using uchar = unsigned char;

// Create a Pixel structure to process the image
using uc = unsigned char;
struct Pixel 
    {uc red, green, blue , alpha;};
     
    void average(Pixel& p )
    {
     int average = (p.red +p.green + p.blue)/3;
     p.red = p.blue = p.green = static_cast<uc>(average);
    }
    void lumi(Pixel *p )
    {
        
     double avg = p->red*.2999+ p->green*.587 + p ->blue * .114;
     p->red = p -> blue = p -> green = static_cast<uc>(avg);
     
        
    }
     
     
int main()
{
    // Loads image into memory
    int w, h, bpp;
    uchar* const data = stbi_load("images/billiards.jpg", &w, &h, &bpp, 4);
    if (data == nullptr)
    {
        cerr << "Cannot load billards.jpg" << endl;
        return -1;
    }
    
    Pixel * beg = reinterpret_cast<Pixel*>(data);
    Pixel * end = beg + w *h;
   

   

    //  Use renterpret_cast to create a pointer to the beginning
    
    //  Use address arithmetic to create a pointer to the end

    //  Use an iterator loop to process each pixel
     while(beg != end){
      beg++;
      //average(*beg);
      lumi(beg);
        
    }
    
    //  Increment the pointer to go to the next pixel
   
    // Save modified image to output
    bool OK = stbi_write_png("images/grayscale.png", w, h, 4, data, w * 4);
    if (OK)
        cout << "Grayscale image in images/grayscale.png" << endl;
    else
        cout << "Could not save image." << endl;

    // Free image data
    stbi_image_free(data);

    return 0;

}
