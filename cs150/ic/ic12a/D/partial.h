/**
 * CS 150 partially-filled array templates.
 * @version Spring 2022
 * @author Stephen Gilbert
 */
#ifndef PARTIAL_H
#define PARTIAL_H
#include <string>
#include <sstream>

/**
 * inserts value int to array a, keeping the elements in order.
 * @param a the array
 * @param size the address of the size of the elements
 * @param capcity the maximum elements in the array
 * @param value the value to add
 * @return a pointer to the added value (success) or nullptr (failure)
 */
template <class T>
T* insert(T* a, size_t& size, size_t capacity, const T& value);

#endif
