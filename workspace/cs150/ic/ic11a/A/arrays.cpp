 /** CS 150 - Example.
 * Creating and using arrays.
 */
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    int arr[3] ={1,2,3};
    char ca[4] ={'c','a','t','\0'};// this works
    long la[5]= {7L,8L,9L,10L,11L};
    float fa[6]={1.5F , 2.5F ,3.5F, 4.5F, 5.5F,6.5F};
    double da[7]={7.5,8.5};

    //1

    cout<< "print using the name of each array"<<endl;
    cout<<"ai->"<< arr <<endl;
    cout<<"ca->"<< ca <<endl;
    cout<<"la->"<< la <<endl;
    cout<<"fa-->"<< fa<<endl;
    cout<<"da->"<< da <<endl;
    //2
    cout<<"ai->"<<endl;
    for(auto i :arr){cout<< i << " " ;}cout<<endl;
    cout<<"ca->";
    for(auto i :ca){cout<< i << " " ;} cout<<endl;
    cout<<"la->";
    for(auto i :la ){cout<< i << " " ;}cout<<endl;
    cout<<"fa->";
    for(auto i :fa){cout<< i << " " ;}cout<<endl;
    cout<<"da->";
    for(auto i :da){cout<< i << " " ;}cout<<endl;

    char* p = ca;
    while(*p != '\0'){
        cout<< *p;
        p++;
    }

    //while(++beg != lend){cout<<"}" << endl;}

    cout<<"\""<< endl;
    cout << "\n3. Calculate a pointer to the end using address arithmetic"<< endl;
    //4

    cout<< "fa-> {"<< * begin(fa);
    for (auto itr = begin(fa)+ 1 ;itr != end(fa); itr++){
        cout<< ", " <<itr;
        cout<< "}"<<endl;
    }

    cout<< "da->{ ";
    for (auto e : da ){cout<< e << " ";}
    cout<<"}" <<endl;



    return 0;
}

