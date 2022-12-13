//Trace the code segment below to determine the output.
#include <stack>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printStack(stack<char> s)
{
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void reverseStack( stack<char> s, stack<char>& t) // the variable are passed by value to it used the copy constructor and none of the values are saved
{
    while (!s.empty())
    {
        t.push(s.top());
        s.pop();
    }
}

int main()
{
    vector<char> aVector = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    stack<char> s1, s2;

    for (int i = 0; i < 7; i+=2){
        s1.push(aVector[i]);
    }
    reverseStack(s1, s2);

    printStack(s2);
    printStack(s1);
    
    return 0;
}
/*Exercise 2
Implement the definition of a function named selectiveReverse() that passes an STL stack as a parameter and reverses it, but only by including all even numbers except 2. 

Restrictions

You may create an additional stack container (only one).
Use function stack::swap() 
Example

Stack is: (top) 1 2 3 4 5 6 7 8 9
Function runs...
Stack is: 8 6 4

Stack is: (top) 3 8 2 2 6 1 7 2 4 8 3 1 2 2 4
Function runs...
Stack is: 4 8 4 6 8 */
void selectiveReverse(stack<int>& paramStack)
{
    stack<int> tempStack1;
    while (!paramStack.empty())
    {
        // Since we need to use the top element more than once,
        // it is more efficient to create a variable rather than
        // calling the function continuously.
        int topElement = paramStack.top();
        if ( (topElement % 2 == 0) && (topElement != 2) )
        {
            tempStack1.push(topElement);            
        }
        paramStack.pop();
    }
    // Do not forget to check cplusplus.com to see
    // if there are any functions you can use.
    tempStack1.swap(paramStack);
}