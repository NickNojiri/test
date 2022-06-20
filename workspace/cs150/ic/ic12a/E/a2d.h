/**
    @file a2d.h
    @author Put your name here
    @version Put the date here
    Declarations for CS 150 2D Array Exercises
*/
#ifndef A2D_H_
#define A2D_H_
#include <iostream>

///////////// PLACE YOUR PROTOTYPES HERE /////////////////////

/**
    2D Arrays MUST have a constants second dimension.
    Change this for different size 2D arrays.
*/
const size_t MAX_COLS = 10;

// Add your prototypes for average here
// 1. average takes a 2D array of int, rows and columns.
double average(const int a[][MAX_COLS],size_t rows, size_t cols=MAX_COLS);
//      Default columns to MAX_COLS
// 2. average takes a 1D array of int, columns
//      Default columns to MAX_COLS
double average(const int a[],size_t cols=MAX_COLS);
// 3. average takes a 2D array of int, rows, columns and column.
//      No defaults. Average numbers in column
// All return a double.
double average(const int a[][MAX_COLS],size_t rows, size_t cols, size_t col);


/**
    Prints a 2D array in this form: {{1 2}, {3 4}}.
    @param out the ostream to print on.
    @param a 2D array of [?][MAX_COLS]
    @param rows number of rows in the array
    @param cols number of columns in each row

    @pre cols cannot be larger than MAX_COLS
    @return return the stream
*/
std::ostream& aout(std::ostream& out,
    const int a[][MAX_COLS], size_t rows,
    size_t cols = MAX_COLS);


#endif
