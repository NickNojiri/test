
/*Chapter 1: Exercises
For these exercises, you will need to create member functions of the class AnyList. Below you can find the interface of the class along with the definition of the Node class.

class Node 
{ 
public: 
    Node() : data(0), ptrToNext(nullptr) {} 
    Node(int theData, Node *newPtrToNext)  
        : data(theData), ptrToNext(newPtrToNext){} 
    Node* getPtrToNext() const { return ptrToNext; } 
    int getData( ) const { return data; } 
    void setData(int theData) { data = theData; } 
    void setPtrToNext(Node *newPtrToNext)  
        { ptrToNext = newPtrToNext; } 
    ~Node(){} 
private: 
    int data;         
    Node *ptrToNext;  // Pointer that points to next node. 
}; 

class AnyList 
{ 
public: 
    AnyList() : ptrToFirst(nullptr), count(0) {} 
    // Other member functions of the class...  

private: 
    // Pointer to point to the first node in the list. 
    Node *ptrToFirst;  
    // Variable to store the number of nodes in the list. 
    int count;  
};
Exercise 1
Write the definition fo the funtcion insertBack() as a member function of the class AnyList as follows:

Parameter: An int storing a value.
The function creates a new node that stores the value passed by the parameter, and inserts the new node at the end of the list.
CodeCheckLinks to an external site.

Exercise 2
Write the definition of the function getNumOfElements() as a member function of the class AnyList. The function should return the number of nodes in the list. 

CodeCheckLinks to an external site.

Exercise 3

Write the definition of the function search() as a member function of the class AnyList. 

Parameter: An int storing an element to be searched.
The function traverses the list to search for the element passed by the parameter. If the element is found, the function returns true; if the element is not found, the function returns false.
The function traverses the list using a WHILE loop.
NOTE: To make your function efficient, make sure it stops when it finds the element. (Use a Boolean value.)
If the list is empty, the function prints the error message "The list is empty."
Assumption: All elements are unique.
CodeCheckLinks to an external site.

Exercise 4
Write the definition of the function replaceData() as a member function of the class AnyList as follows:

Parameters: An int storing the data to replace and an int storing the replacement.
The function replaces an element in the list with the new element passed as the second parameter.
If the element is not found, the function prints the message "Element is not in the list."
Example:
Calling object: [1, 2, 3], Parameters: [3, 7]) => After replacing 3 with 7: [1, 2, 7]
Calling object: [45, 89, 12, 64], Parameters: [89, 100]) => After replacing 89 with 100: [45, 100, 12, 64]
Assumptions:
There is at least one element in the list.
The are no duplicates.
CodeCheckLinks to an external site.

Exercise 5

Write the definition of the function deleteElem() as a member function of the class AnyList as follows:

Parameter: An int storing an element to delete.
The function searches for the value passed by the parameter and, if found, it deletes it. If the element is not found, the function prints the error message "Element # is not in the list." where # is replaced by the element.
The function traverses the list using a WHILE loop. NOTE: To make your function efficient, make sure it stops when it finds the element. (Use a Boolean value.)
If the list is empty, the function prints the error message "The list is empty."
Assumption: All elements are unique.

////////////////////////////////////////////////////////////////
solution

Solution to Exercise 1
The function implementation must be written in the AnyList.cpp file, and it must include the class qualifier and the scope resolution ( AnyList:: ). Forgetting to specify to which class the function belongs is a very common error. 

Note that there are two ways to check if a list is empty:

if (count == 0)...
if (ptrToFirst == nullptr)...
The second one is more common, because it is more readable and allows the programmer to check that all the pointers are pointing to the correct node.

void AnyList::insertBack(int newData)
{
    // The LONG way...
    //    Node *ptrToNewNode = new Node;
    //    ptrToNewNode->setData(newData);

    // This is BETTER...
    Node* ptrToNewNode = new Node(newData, nullptr);

    // Make sure you always use "nullptr" and not NULL.

    if (ptrToFirst == nullptr)
        ptrToFirst = ptrToNewNode;
    else
    {
        Node* current = ptrToFirst;

        while (current->getPtrToNext() != nullptr)
            current = current->getPtrToNext();

        current->setPtrToNext(ptrToNewNode);
    }

    ++count;
}
Solution to Exercise 2
The function implementation must be written in the AnyList.cpp file, and it must include the class qualifier and the scope resolution ( AnyList:: ). Forgetting to specify to which class the function belongs is a very common error. 

The function should be constant because it does not modify any of the member variables of the class to which it belongs.

It is unnecessary to create additional variables when you can return a value as it is. This function should only include a return statement as it shows.

int AnyList::getNumOfElements() const
{
    return count;
}
Solution to Exercise 3
The function implementation must be written in the AnyList.cpp file, and it must include the class qualifier and the scope resolution (AnyList:: ). Forgetting to specify to which class the function belongs is a very common error. 

The function should be constant because it does not modify any of the member variables of the class to which it belongs.

bool AnyList::search(int key) const
{
    // Do NOT create any variables here. If the list is empty,
    // you are just wasting memory. Create your variables in 
    // the ELSE block.

    if (count == 0) //can also use: if (first == nullptr)
    {
        cerr << "The list is empty.\n";
        // Is your output message formatted as expected?
        return false;
        
            If "return false" was missing in this block, then
            this path would not return a value. This means that
            in the case count is 0, the function will not behave
            as expected.
        
    }
    else // Make sure you are using an IF/ELSE statement.
    {
        Node* current = ptrToFirst;

        while (current != nullptr)
        {
            if (current->getData() == key)
                return true;
            else
                current = current->getPtrToNext();
        }

        return false;
    }
}
Solution to Exercise 4
The function implementation must be written in the AnyList.cpp file, and it must include the class qualifier and the scope resolution ( AnyList:: ). Forgetting to specify to which class the function belongs is a very common error. 

The function should NOT be constant. Even though the function does not modify the member variables of the calling object, it does modify the data to which the object is pointing to. This is explained in the text-version of the Singly-linked List lesson. 

Make sure not to let the WHILE loop run to the end of the list. It would be inefficient. Think of a case where the list has 100 elements and the element to replace happens to be the first one. It would be unnecessary to traverse the whole list. For this reason, you should NOT use a FOR loop.

If you wrote an IF statement to check if the list is empty, it would be incorrect. The assumption is that the list has at least one element. Make sure you pay attention to details.

void AnyList::replaceData(int oldKey, int newKey)
{
    bool found = false; // to stop the loop when key is found
    Node* current = ptrToFirst;
    while (current != nullptr && !found)
    {
        if (current->getData() == oldKey)
            found = true;
        else
            current = current->getPtrToNext();
    }

    if (current == nullptr) // key was not found
        cout << "Element is not in the list." << endl;
    else
        current->setData(newKey);
}
Solution to Exercise 5
The function implementation must be written in the AnyList.cpp file, and it must include the class qualifier and the scope resolution ( AnyList:: ). Forgetting to specify to which class the function belongs is a very common error. 

Make sure not to let the WHILE loop run to the end of the list. It would be inefficient. Think of a case where the list has 100 elements and the element to element to delete happens to be the first one. It would be unnecessary to traverse the whole list. For this reason, you should NOT use a FOR loop.

Do NOT use a sequence of IF/ELSE statements. It is more efficient to have two blocks:
      IF (list is empty) we are done
      ELSE ... take care of the rest.

If you needed to test this function, these are the test cases you should try:

Empty list
List has one element
Delete that element.
Element is not in the list.
List has two elements
Delete first element.
Delete second element.
Element is not in the list.
List has three elements
Delete first element.
Delete second element.
Delete third element.
Element is not in the list.
List has several elements
Delete first element.
Delete last element.
Delete an element somewhere in the middle.
Element is not in the list.

void AnyList::deleteElem(int elem)
{
    if (count == 0) // OR: (ptrToFirst == nullptr)
    {
        cerr << "List is empty." << endl;
    }
    else
    {
        // Search if the elem is in the list.
        // When found, delete the node.

        // if it is the first node
        if (ptrToFirst->getData() == elem)
        {
            Node* current = ptrToFirst;
            ptrToFirst = ptrToFirst->getPtrToNext();
            delete current;
            current = nullptr;
            --count;
        }
        // else (could be any of the other nodes)
        else
        {
            bool found = false;
            Node* trailCurrent = ptrToFirst;
            Node* current = ptrToFirst->getPtrToNext();
            // OR: Node* current = trailCurrent->getPtrToNext();

            while (!found && current != nullptr)
            {
                if (current->getData() == elem)
                {
                    trailCurrent->setPtrToNext(current->getPtrToNext());
                    delete current;
                    current = nullptr;
                    --count;
                    found = true;
                }
                else
                {
                    trailCurrent = current;
                    current = current->getPtrToNext();
                }
            }

            if (!found) // Do NOT write (found == false) !!! 
                        // Redundant statement.
                cout << "Element " << elem << " is not in the list." << endl;
        }
    }
}
*/