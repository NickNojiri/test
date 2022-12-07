#ifndef DOUBLYLIST_H_
#define DOUBLYLIST_H_

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

    // Other member functions of the class... 
    bool search(int key);
    void swapList(DoublyList& toList);
    void insertInOrder(int newData);
    void DoublyList::binarySearch(queue<int>& aQueue)const;
    void print();


private:
    Node *first; // Pointer to the first node on the list.       
    Node *last;  // Pointer to the last node on the list.           
    int count;   // Number of nodes in the list.           
};
#endif