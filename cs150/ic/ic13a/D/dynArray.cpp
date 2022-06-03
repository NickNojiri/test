/**
 *  CS 150 - Dynamic Arrays
 */
#include <iostream>
#include <cstdlib>
#include <memory>
using namespace std;

// Write this using regular pointers first, then unique_ptr
// Use make check each time

int main()
{

    // 1. Ask the user how big an array to create
    cout << "Number of elements: ";
    size_t size;
    cin>>size;

    // 2. Create an array of that size
    //int * a = new int[size];
    //uni pointer
    //auto a(make_unique(<int[]>)(size));
    unique_ptr<int[]> a(new int[size]);
    // 3. Ask the user to enter values into each element
    for(size_t i =0 ; i < size ; ++i){
        cout<<"a[" << i << "]: ";
        cin>> a[i];
        
    }
    // 4. Sum and print
    int sum = a[0];
    cout<< a[0] ;
    for(size_t i = 1; i < size;++i){
        cout<<" + " << a[i];
        sum+=a[i];
    }
    cout << " = " << sum << endl;
    
    // 5. Free memory if necessary

 
    return 0;
}






