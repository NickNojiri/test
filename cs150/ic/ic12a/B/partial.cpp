#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string STUDENT = "Who are you?"; // Add your Canvas id here.

#include "partial.h"

// Define your template functions here

/**
 * Converts an array to its string representation.
 * @param a the array
 * @param size the number of the elements
 * @return a string in this form "[1 2 3]"
 */
template <class T>
string toString(const T* a, size_t size){
    ostringstream out;
    out << "[";
    if(size >  0){
        out << a[0];
        for(size_t i = 1 ; i < size ; i ++){
            out<<" "<<a[i];
        }
        out << "]";
    }
    return out.str();
}

/**
 * Reads from cin and stores values at the end of the array
 * @param[in,out] a the array
 * @param capacity the maximum number of elements
 * @return the current size of the array"
 */
template <class T>
size_t readArray(T* a, size_t capacity){
    size_t size = 0;
    T n;
    while (size < capacity && cin >> n ){
        a[size] = n ;
        size++;
    }
    return size;
}

/**
 * Finds the index of a value in an array
 * @param a the array
 * @param size the number of elements
 * @param value the element to search for
 * @return position of first occurance of val or NOT_FOUND
 */
template <class T>
size_t indexOf(const T* a, size_t size, const T& val){
  for(size_t i = 0; i < size; i++ )
  {
      if(*(a+i)==val ){
          return i;
      }
  }
  return NOT_FOUND;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    int a[] = {1, 2, 3};
    cout << toString(a, 3) << endl;
    double b[] = {3.0, 4.0, 5.2};
    cout << toString(b, 3) << endl;

    cout << "Enter up to 5 integers; quit when done." << endl;
    int c[100];
    auto n = readArray(c, 5);
    cout << "You read: " << toString(c, n) << endl;

    cout << "Enter up to 5 doubles; quit when done." << endl;
    double d[100];
    n = readArray(d, 5);
    cout << "You read: " << toString(d, n) << endl;

    int e[] = {1, 2, 3, 4, 6};
    cout << "indexOf(e, 5, 4): " << indexOf(e, 5, 4) << endl;
    cout << "indexOf(e, 5, 5): " << indexOf(e, 5, 5) << endl;

    double f[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "indexOf(f, 5, 1.2): " << indexOf(f, 5, 1.2) << endl;
    cout << "indexOf(f, 5, 1.1): " << indexOf(f, 5, 1.1) << endl;

    return 0;
}
