#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas id here.

#include "partial.h"

// Define your template functions here

/**
 * inserts value int to array a, keeping the elements in order.
 * @param a the array
 * @param size the address of the size of the elements
 * @param capcity the maximum elements in the array
 * @param value the value to add
 * @return a pointer to the added value (success) or nullptr (failure)
 */
template <class T>
T* insert(T* a, size_t& size, size_t capacity, const T& value)
{
    if(size >= capacity){
        return nullptr;
    }
    size_t pos= 0 ;
    while(pos < size){
        if(a[pos]> value)break;
        pos++;
    }
    for(size_t i = size; i > pos ; --i){
            a[i] = a[i - 1];}
    size++;
    a[pos]= value;
    return &a[pos];
        
    
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    srand(static_cast<unsigned>(time(0)));

    // Test an array of ints
    const size_t capacity = 25;
    int a[capacity];
    size_t n = 0;

    for (int i = 0; i < 5; i++)
    {
        int x = rand();
        cout << "Inserting " << x << " into a->";
        insert(a, n, capacity, x);
        cout << '[';
        if (n > 0) {
            cout << a[0];
            for (size_t j = 1; j < n; j++)
                cout << ' ' << a[j];
        }
        cout << ']' << endl;
    }

    // an array of doubles
    cout << endl << "Now an array of double" << endl;
    double b[100];
    n = 0;
    for (int i = 0; i < 4; i++)
    {
        double val = static_cast<double>(rand()) / (rand() + 1);
        cout << "Inserting " << val << " into b->";
        insert(b, n, capacity, val);
        cout << '[';
        if (n > 0) {
            cout << b[0];
            for (size_t j = 1; j < n; j++)
                cout << ' ' << b[j];
        }
        cout << ']' << endl;
    }

    return 0;
}
