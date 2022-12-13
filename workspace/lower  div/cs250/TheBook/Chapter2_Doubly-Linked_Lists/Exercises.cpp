/*Chapter 2: Exercises
For these exercises, you will need to create member functions of the class DoublyList. Below you can find the interface of the class along with the definition of the Node class.

class Node
{
public:
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int theData, Node* prevLink, Node* nextLink)
        : data(theData), prev(prevLink), next(nextLink) {}
    int getData() const { return data; }
    Node* getPrev() const { return prev; }
    Node* getNext() const { return next; }
    void setData(int theData) { data = theData; }
    void setPrev(Node* prevLink) { prev = prevLink; }
    void setNext(Node* nextLink) { next = nextLink; }
    ~Node(){}
private:
    int data;   // To simplify, we are using only one piece of data.
    Node* prev;
    Node* next;
};

class DoublyList
{
public:
    DoublyList() : first(nullptr), last(nullptr), count(0) {}

    // other member functions
    
    void clearList();
    ~DoublyList();

private:
    Node *first;    
    // Pointer to the first node on the list.
    Node *last;        
    // Pointer to the last node on the list.
    int count;        
    // Number of nodes in the list.
};
Exercise 1
Write the definition of the function front() as a member function of the class DoublyList. The function returns the value stored in the first node of the list.

Assumption: The list has at least one element.

CodeCheckLinks to an external site.

Exercise 2
Write the definition of the function back() as a member function of the class DoublyList. The function returns the value stored in the last node of the list.

Assumption: The list has at least one element.

CodeCheckLinks to an external site.

Exercise 3
Write the definition of the function insertBack() as a member function of the class DoublyList. 

Parameter: An int storing a value to insert at the end of the list.
The function inserts at the end of the list a new node storing the value passed by the parameter.
CodeCheckLinks to an external site.

Exercise 4
Write the definition of the function moveToList() as a member function of the class DoublyList.

Parameter: an object of the class DoublyList.
The function transfers (moves) all the elements stored in the calling object to the parameter object . After the transfer, the calling object should be empty. What does "move" mean? Here is an example:
Calling object has 3 nodes.
Parameter object is empty.
Moving elements means that the parameter object will point to the elements that belong to the calling object, and that the calling object will end up being empty. How can this be accomplished in the most efficient way? There is no need to create new nodes. You are going to make the parameter object point to the first and last node of of the calling object, and then update the count. Now, after doing so, it is important to make sure that the calling object is not pointing to the nodes any longer, because now those nodes belong to the parameter object (otherwise you will have two objects pointing to the same nodes). You should not destroy the calling object, because your function is just transferring the nodes from one object to another; you only need to write the appropriate code that will make the calling object be an empty object. You need to think about this one very carefully (I recommend drawing it)..
Assumption: The parameter object is empty.
CodeCheckLinks to an external site.

Exercise 5
Write the definition of the function deleteElem() as a member function of the class DoublyList.

Parameter: an int storing the value to delete.
The function searches the list to delete the element passed by the parameter. Consider all possible cases as explained in the lesson. Make sure you stop the loop as soon as you find the element to delete.
If the list is empty, output the error message, "Cannot delete from an empty list."
If the element is not found, output the error message, "Element to be deleted is not in the list."

Chapter 2: Exercises Solution
Solutions to Exercise 1
Note:

The assumption is that there is at least one node. Therefore, having an IF statement checking if the list is empty is unnecessary.
int DoublyList::front() const
{
    return first->getData();
}
Solution to Exercise 2
Note:

This is a doubly-linked list that has a pointer last that can reach the end of the loop in no time. Using a loop would be inefficient.
The assumption is that there is at least one node. Therefore, having an IF statement checking if the list is empty is unnecessary.
int DoublyList::back() const
{
    return last->getData();
}
Solution to Exercise 3
Note:

Common error: Forgetting to reset pointer last.
Using (count == 0) instead of (first == nullptr) is acceptable. Usually (first == nullptr) is preferred, because it also checks whether the pointer has a correct value.
void DoublyList::insertBack(int elem)
{
    if (first == nullptr)
    {
        first = new Node(elem, nullptr, nullptr);
        last = first;
    }
    else
    {
        last->setNext(new Node(elem, last, nullptr));    
        last = last->getNext();    
    }

    ++count;
}
Solution to Exercise 4
Since we are "moving" the data from one list to another, it would be inefficient to create new nodes for the parameter object, copy all the data from the calling object into the parameter object, and finally delete all nodes in the calling object. The best way to do this is to keep the nodes where they are in memory and connect the parameter object's pointers (first and last) to the nodes of the calling object, making sure to detach the calling object from the nodes that now belong to the parameter object. How do you detach them? By setting first and last to nullptr. This way, we are reusing existing nodes without creating new ones.

void DoublyList::moveToList(DoublyList& toList)
{
    // Assume parameter object is empty.
    // Do NOT assume calling object is empty.
    // Do nothing if calling object is empty.

    if (count != 0)
    {
        toList.first = first;
        toList.last = last;
        toList.count = count;

        // Detach the calling object from the nodes that
        // now belong to the parameter object.
        first = nullptr;
        last = nullptr;
        count = 0;

        // The calling object still exists, but it is empty
        // as it was when it was created before inserting
        // any elements.
    }
}
Solution to Exercise 5
A few important things to notice:

It would be inefficient to declare the variables found or current before starting the IF block. Declare them ONLY right before you are ready to use them. There is no need to allocate memory if you do not need it just yet. 
Pay attention to the sequence of IF/ELSE statements and the cases they consider.
This is NOT a function where you would use a FOR loop. Why? Because the loop in here might end before it reaches the end; therefore, in this case, a WHILE loop is more appropriate.
Do NOT use "break" or "return;" Use a Boolean value when you want to get out of a loop. A "return" is for functions that return something, not for void functions.
Go over the code and read the comments. Remember that it is not about making the function compile (you are expected to be able to do that), but it is about making it efficient and readable.

void DoublyList::deleteElem(int elemToDelete)
{
    // Case 1: List is empty
    if (first == nullptr)  // OR: if (count == 0)                           
    {
        // Use cerr, rather than cout (why?)
        cerr << "Cannot delete from an empty list.\n";
    }
    else
    {
        // Set a Boolean value to keep track of 
        // whether the item is found or not.
        bool found = false;

        // Case 2: Node to be delete is the first node.
        if (first->getData() == elemToDelete)
        {
            // If there is only one node...
            if (first == last)    // OR: if (count == 1)                            
            {
                delete first;
                first = last = nullptr;
            }
            else // If there is more than one node...
            {
                first = first->getNext();
                delete first->getPrev();
                first->setPrev(nullptr);
            }

            found = true;
            --count;
        }
        // Case 3: Node to delete is the last node.
        else if (last->getData() == elemToDelete)
        {
            last = last->getPrev();
            delete last->getNext();
            last->setNext(nullptr);
            found = true;
            --count;
        }
        // Case 4: Node to delete is somewhere in the list.
        else
        {
            // Create a pointer to traverse the list.
            // Start pointing at the second node, because
            // you already know that it is not the first node.
            Node* current = first->getNext();

            while (!found && current != nullptr)
            // Don't let the WHILE loop continue if 
            // the element is found!
            {
                if (current->getData() == elemToDelete)
                {
                    // connect previous and next node
                    current->getPrev()->setNext(current->getNext());
                    current->getNext()->setPrev(current->getPrev());
                    // NOTE: It would be more efficient to create 
                    // a pointer pointing to the previous node and 
                    // another pointer pointing to the next node,
                    // because we would not have to call too many 
                    // functions, but this is good practice for the exam.

                    delete current;
                    current = nullptr;
                    // Don't leave a dangling pointer!

                    found = true;

                    --count;
                }
                else
                    current = current->getNext();
            }
        }

        if (!found)
            cout << "Element to be deleted is not in the list.\n";
    }
}
*/