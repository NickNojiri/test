

#include <iostream>
using namespace std;

int a = 3;
static int b = 7;
static void d()
{
    int e = 5;
    static int f = 6;
    cout << a << b << e << f << endl;
    f++;
}

void c()
{
    cout << a << b << endl;
    d();
}
