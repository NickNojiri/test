#include <string>
#include <iomanip>
#include <iostream>

using namespace::std;
string NAME{"NICHOLAS NOJIRI"};
int f(const char* a, const char* b )
{
    int res =-2;
    const char* p =a;
    while(*p)
    {
        const char* p2 =p;
        const char* p3 =b;
        while(*p2!= '\0' && *p3 !='\0' && *p2==*p3)
        {
            p2++;
            p3++;
            
        }
        if(*p3=='\0')
        {
            int c=*a;
            cout<<c<<p;
        res=(p-a);
        }
        p++;
    }
    
    return res;
}
// int f2();
// int f3();

int main(){
    const char* a = "the pina";
    const char* b = "colada";
    const char* d = "the pina colada";
    cout<<f(a,b)<<endl;
    cout<<f(d,b)<<endl;
}