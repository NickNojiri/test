/**
 *  @file a2d.cpp
 *  @author your name
 *  @version section and date
 */
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "a2d.h"


// Add your prototypes for average here
// 1. average takes a 2D array of int, rows and columns.
double average(const int a[][MAX_COLS],size_t rows, size_t cols)
{
    double sum =0 ;
    int count = 0 ;
    for(size_t r =0 ; r < rows ; r++){

        for(size_t c =0 ; c < cols ; c++){
            count++;
            sum+= a[r][c];
        }
    }
    return sum / count;
}
//      Default columns to MAX_COLS
// 2. average takes a 1D array of int, columns
//      Default columns to MAX_COLS
double average(const int a[],size_t cols)
{
    double sum = 0;
    for(size_t i= 0 ; i < cols ; i++ ){sum += a[i];}
    return sum / cols;
}
// 3. average takes a 2D array of int, rows, columns and column.
//      No defaults. Average numbers in column
// All return a double.
double average(const int a[][MAX_COLS],size_t rows, size_t cols, size_t col){

    double sum =0 ;
    for(size_t r = 0 ; r < rows; ++r)
    {
        sum += a[r][col];
    }
    return sum/ rows;
}



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    return 0;
}

// I've already completed the aout() function
ostream& aout(ostream& out, const int a[][MAX_COLS], size_t rows, size_t cols)
{
    assert(cols <= MAX_COLS);
    out << "{";
    for (size_t r = 0; r < rows; r++)
    {
        out << "{" << a[r][0];
        for (size_t c = 1; c < cols; c++)
        {
            out << " " << a[r][c];
        }
        out << ((r == rows - 1) ? "}" : "}, ");
    }
    out << "}";
    return out;
}
