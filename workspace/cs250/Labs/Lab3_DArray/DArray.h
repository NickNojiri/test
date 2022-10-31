#ifndef DARRAY_H_
#define DARRAY_H_
class DArray
{
public:
    // member functions 
    bool isFull() const;
    bool DArray::isEmpty() const;   
    void DArray::clearArray();
    void rotateRange(int x , int y, int z);
    void rotate(int index);
    
private:
    int *a; // pointer to a dynamic array of type int          
    int capacity;      
    int numOfElements; 
};

#endif