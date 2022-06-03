#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;
/**
   Computes a Fibonacci number.
   @param n an integer
   @return the nth Fibonacci number
*/
int fib(int n)
{
    if (n < 1) return 0;
    if (n > 1) return fib(n-1) + fib(n-2);
    return 1;
}

/////////// ADD YOUR CODE HERE /////////////////
int helper(int n, int t0, int t1)
{
    if(n == 0 ) return t0 ; 
    if(n == 1) return t1;
    return helper(n-1,t1,t1+t0);
}

int fib2(int n)
{
    return helper(n,0,1);
}


int main()
{
    cout << "Measuring Fibbonocci efficiency" << endl;
    cout << fixed << setprecision(0);
    auto start = chrono::steady_clock::now();
    auto stop = chrono::steady_clock::now();
    auto diff = stop - start;

    // fib(10)
    start = chrono::steady_clock::now();
    cout << "fib(10)->" << fib(10);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(10)->" << fib2(10);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    // fib(25)
    start = chrono::steady_clock::now();
    cout << "fib(25)->" << fib(25);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(25)->" << fib2(25);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    // fib(35)
    start = chrono::steady_clock::now();
    cout << "fib(35)->" << fib(35);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(35)->" << fib2(35);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    // fib(45)
    start = chrono::steady_clock::now();
    cout << "fib(45)->" << fib(45);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    start = chrono::steady_clock::now();
    cout << "fib2(45)->" << fib2(45);
    stop = chrono::steady_clock::now();
    diff = stop - start;
    cout << " : " << chrono::duration<double, nano>(diff)
        .count() << " ns" << endl;

    cout << "\n -- done --" << endl;

    return 0;
}
