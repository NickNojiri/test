/*Exercise 1
Trace by hand the following code segment to determine the output.
*/
#include <queue>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& q, stack<int>& s)
{
    while (!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) 
    { 
        q.push(s.top()); 
        s.pop();         
    } 
}

/*Exercise 2
Implement the definition of a function reverseQueue() that takes as a parameter
an STL queue and an STL stack, both of type int, and reverses the elements in 
the queue by using the stack. Assume the stack is empty.
*/
int main()
{
    queue<int> q;

    q.push(8);
    //front 8
    q.push(q.front() + 2);
    // 8,10
    q.push(3 * q.front());
    //f->8,10,8*3
    q.pop();
    //pop(8) f->10,24
    q.push(q.front());
    
    do
    {//10,24,10
        cout << q.front() << " ";
        q.pop();

    } while (!q.empty());
//end if empty
    return 0;
}