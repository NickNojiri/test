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
 * Erases a value from the array a, keeping the elements in order.
 * @param[in,out] a the array
 * @param[in,out] size the number of active elements
 * @param val the value to search for
 * @return true if an element was removed, false otherwise
 */
template <class T>
bool erase(T* a, size_t& size, const T& value);

#endif
