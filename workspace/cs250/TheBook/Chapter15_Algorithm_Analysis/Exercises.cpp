/*What is the running time of a function that inserts a node at the front of a singly-linked list?

void AnyList::insertFront(int elem)
{  
     first= new Node(elem, first);  
     ++count;                       
}
Exercise 2
What is the running time of a function that inserts a node at the end of a singly-linked list?

Unless it is stated, do NOT assume that one of the member variables is a pointer pointing to the back of the list!

Think about the implementation…

void AnyList::insertBack(int elem)
{
     Node *newNode = new Node(elem, nullptr);   
     if (count == 0)                            
          first = newNode;                      
     else 
     {
          Node *current = first;                
          while (current->getNext() != nullptr) 
               current = current->getNext();   
          current->setNext(newNode);            
     }
     ++count;                                   
}
Exercise 3
What is the best, average and worst running time of an algorithm that searches an array linearly?

Exercise 4
What is the running time of this algorithm?

void func( )
{
     for (int i = 0; i < n; ++i)        
          for (int j = 0; j < m; ++j)   
              cout << (i * j) << endl;  
}
Exercise 5
What is the running time of this algorithm?

void func( )
{
     for (int i = 0; i < n; ++i) 
         cout << i << endl;
     for (int j = m; j > 0; --j)  
         cout << j << endl;
}
Exercise 6
What is the running time of this algorithm?

void func( )
{
     for (int i = 1; i < n; i+=3)
         for (int j = 1; j < 10; ++j)
             for (int k = 1; k < n; k*=2)
                 // do something…
}*/
////////////////////////////////solution////////////////////////////////
/*
Think about the implementation…

void AnyList::insertFront(int elem)
{  
     first= new Node(elem, first);  // O(1)
     ++count;                       // O(1)
}
There are no loops. Each statement executes only once. The running time is: O(1) + O(1) = O(1)

Solution to Exercise 2
Unless it is stated, do NOT assume that one of the member variables of a singly-linked list is a pointer pointing to the back of the list!

Think about the implementation…

void AnyList::insertBack(int elem)
{
     Node *newNode = new Node(elem, nullptr);   // O(1)
     if (count == 0)                            // O(1)
          first = newNode;                      
     else 
     {
          Node *current = first;                // O(1)
          while (current->getNext() != nullptr) // Loop: O(n)
               current = current->getNext();   
          current->setNext(newNode);            // O(1)
     }
     ++count;                                   // O(1)
}
Note that the while statement might run only once, if it is false. Nevertheless, we need to consider the worst case scenario, which is O(n). This is what we have: O(1) + O(1) + ( O(1) or O(n) ) + O(1) + O(1)

Since the dominant term is O(n), the running time of the algorithm is: O(n)

Solution to Exercise 3
Best time: O(1)
If the element is found in an index that is close to index 0 of the array.
Average time: O(n/2)
If the element is found at an index that is in the middle of the array.
Worst time: O(n)
If the element is found in an index that is close to the end of the array.
In this case, the average running time is O(n/2), which is the same as O(1/2 ∗ n). Since we can ignore the coefficient, we get a final complexity: O(n)

Solution to Exercise 4
void func( )
{
     for (int i = 0; i < n; ++i)        // O(n)
          for (int j = 0; j < m; ++j)   // O(m)
              cout << (i * j) << "\n";  // O(1)
}
We can skip any O(1), since the dominant term is a linear O-notation, which results in: O(n) ∗ O(m). Why do we multiply? Because for each iteration of the outer loop, we iterate the inner loop m times. Both n and m are unknown; therefore, it makes no difference if we call both of them n, which results in: O(n) ∗ O(n) = O(n^2)

Solution to Exercise 5
void func( )
{
     for (int i = 0; i < n; ++i)  // O(n)
         cout << i << "\n";
     for (int j = m; j > 0; --j)  // O(m)
         cout << j << "\n";
}
The running time for this one is: O(n) + O(m). Why do we add? Because these loops are independent from each other. The first loop will run, and only after the iterations are completed, the second loop will run. Let's simplify it. Since both n and m are unknown, we can change it to: O(n) + O(n). This becomes: 2 * O(n). We remove the coefficient 2, and we get the final complexity: O(n)

Solution to Exercise 6
void func( )
{
     for (int i = 1; i < n; i+=3)          
         for (int j = 1; j < 10; ++j)      
             for (int k = 1; k < n; k*=2)  
                 // do something…
}
The first loop starts at 1 and at each iteration adds 3 to i:  1, 4, 7, 10, 13, 16…  This means that it grows at a linear interval (the interval is always the same, 3), resulting in O(n). The second loop starts at 1 and iterates exactly 10 times. This means that there is no unknown variable and no change (no growth), making the running time of this particular loop a constant O(10), which can be simplified to O(1). The third loop starts at 1 and at each iteration it doubles the value of k:  1, 2, 4, 8, 16, 32, 64… The interval is logarithmic (the interval is not always the same, but it grows), resulting in O(log n). After combining everything we get:

O(n) ∗ O(1) ∗ O(log⁡ n) = O(n log n)

Note that the ‘dominant’ term only applies when the terms are summed up. You cannot ignore terms of n if they are multiplied together. Therefore, O(n) * O(log n) cannot be simplified to O(n), and the final complexity is: O(n log n)
*/