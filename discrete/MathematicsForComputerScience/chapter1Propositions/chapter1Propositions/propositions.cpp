/*
A proposition is a statement that is either true or false
proposition 1.0.1 2+3 =5
proposition 1.0.2 1+1 =3

most basic meaning of the statement 
*/

#include <iostream>

using namespace::std;
class proposition
{
public:
proposition();
proposition(bool c, bool d)
{
    a=c;
    b=d;
}
void print()
{
        cout<<"     P|Q      ||P&Q P|Q "<<endl;
    if(a==1&&b==1)
    {
        cout<<"  TRUE|TRUE   || 1 | 1 |"<<endl;
    }
    else if(a==1&&b==0)
    {
        cout<<"  TRUE|FALSE  || 0 | 1 |"<<endl; 
    }
    else if(a==0&&b==1)
    {
        cout<<" FAlSE|TRUE   || 0 | 1 |"<<endl;
    
    }
    else
    {
        cout<<" FAlSE|FALSE  || 0 | 0 |"<<endl; 
    }
}
private:
bool a, b;

};
int main()
{
    cout<< "hello and welcome to my And Or calculator it is currently a wip!\n";
    int user1=1;
    while(user1 !=0){
        cout<< "please enter two bool values: ";
        bool a, b;
        cin>> a;
        cout<<"second value \n";
        cin >> b;
        while(cin.fail()){// not correct fix with a throw catch or some type of validation
            cin.clear();
            cin.ignore();
            cout<< "atleast one of the 2 values failed please enter a 1 or a 0 only \n";


            cout<< "please enter two bool values: ";
            bool a, b;
            cin>> a;
            cout<<"second value \n";
            cin >> b;
            }
            //end of validation

        cout<<"the And Or calculation is"<< endl;
        proposition m(a,b);
        m.print();

    cout<<"\n \n"<< "would you like to enter a new value? (0/1): ";
    cin>> user1;
    cout<<"\n\n";
    }
   
   
    return 0;
}

