/**
 * CS 150 partially-filled array templates.
 * @version Spring 2022
 * @author Stephen Gilbert
 */
#ifndef PARTIAL_H
#define PARTIAL_H
#include <string>
#include <sstream>

const size_t NOT_FOUND = static_cast<size_t>(-1);

/**
 * Converts an array to its string representation.
 * @param a the array
 * @param size the number of the elements
 * @return a string in this form "[1 2 3]"
 */
template <class T>
std::string toString(const T* a, size_t n);

/**
 * Reads from cin and stores values at the end of the array
 * @param[in,out] a the array
 * @param capacity the maximum number of elements
 * @return the current size of the array"
 */
template <class T>
std::size_t readArray(T* a, size_t capacity);

/**
 * Finds the index of a value in an array
 * @param a the array
 * @param size the number of elements
 * @param value the element to search for
 * @return position of first occurance of val or NOT_FOUND
 */
template <class T>
std::size_t indexOf(const T* a, size_t size, const T& val);

#endif
