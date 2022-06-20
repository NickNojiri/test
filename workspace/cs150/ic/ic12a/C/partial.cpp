#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "partial.h"

// Define your template functions here

/**
 * Erases a value from the array a, keeping the elements in order.
 * @param[in,out] a the array
 * @param[in,out] size the number of active elements
 * @param val the value to search for
 * @return true if an element was removed, false otherwise
 */
template <class T>
bool erase(T* a, size_t& size, const T& value){
    size_t pos = 0 ;
    while(pos < size)
    {
        if( a[pos] == value )
        {
            size--;
            for(size_t i = pos; i < size ; ++i)
            {
                a[i] = a[i +1 ];
               
            }
             return true;
        }
        pos++;
    }// end of while :3
    return false;


}
/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;

    // Test an array of ints
    const size_t capacity = 25;
    int a[capacity] = {1, 3, 5, 7, 9, 12, 15};
    size_t n = 7;

    for (int i = 0; i < 5; i++)
    {
        if (erase(a, n, i))
        {
            cout << "Erased " << i << " from a->";
            cout << '[';
            if (n > 0) {
                cout << a[0];
                for (size_t j = 1; j < n; j++)
                    cout << ' ' << a[j];
            }
            cout << ']' << endl;
        }
        else
            cout << "Cannot erase " << i << " from a." << endl;
    }

    // an array of doubles
    cout << endl << "Now an array of double" << endl;
    double b[100] = {5.5, 6.5, 10.5, 25.5, 35.5};
    n = 5;
    for (auto i = 5.5; i < 40; i += 5)
    {
        if (erase(b, n, i))
        {
            cout << "Erased " << i << " from b->";
            cout << '[';
            if (n > 0) {
                cout << b[0];
                for (size_t j = 1; j < n; j++)
                    cout << ' ' << b[j];
            }
            cout << ']' << endl;
        }
        else
            cout << "Cannot erase " << i << " from b." << endl;
    }

    return 0;
}
