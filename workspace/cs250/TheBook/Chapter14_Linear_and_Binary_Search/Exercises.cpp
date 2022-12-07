/*
Exercise 1
Assume you have an array of 20 elements and value x is at index 9. How many comparisons are needed to find value x using the Binary Search algorithm?
*/
/*
Exercise 2
How many comparisons are needed to find the value 67 in the following list using a binary search?

[23, 47, 56, 67, 78, 73, 82, 89]
*/
/*
Exercise 3
How many comparisons are needed to find the value 91 in the following list using a linear search?

[10, 23, 46, 58, 68, 79, 82, 91]
*/
/*
Exercise 4
How many comparisons are needed to find the value 23 in the following list using a binary search?

[10, 23, 46, 58, 68, 79, 82, 91]
*/
/*
Exercise 5
How many comparisons are needed to find the value 90 in the following list using a binary search?
*/
/*
[10, 15, 23, 37, 46, 58, 60, 68, 71, 79, 82, 91]
*/
/*
Exercise 6
Use the STL function std::binary_search on an STL set that stores the elements listed below. Search for the first element in the set, the last element in the set, an element in the middle, and an element that it is not in the set.

[78, 32, 41, 74, 93, 12, 67, 53, 88, 72, 33]*/

/*
Solution to Exercise 1
To find the value at index 9, it would take 1 comparison. If the array has 20 elements, then the indices go from 0 to 19 => 0 + 19 = 19 / 2 = 9 is the index where the value is.

Solution to Exercise 2
Binary search cannot be applied to an unordered list.

Solution to Exercise 3
To find 91, it would take 8 comparisons. (This is a linear search.)

Solution to Exercise 4
To find 23, it would take 2 comparisons. 

Solution to Exercise 5
Value 90 is not in the list. It will take 4 comparisons to complete the search.

Solution to Exercise 6
void searchElement(const set<int>& aSet, int element)
{
    if (binary_search(aSet.begin(), aSet.end(), element))
        cout << "Element " << element << " was found." << endl;
    else
        cout << "Element " << element << " was not found." << endl;
}

int main()
{
    set<int> aSet = { 78, 32, 41, 74, 93, 12, 67, 53, 88, 72, 33 };

    searchElement(aSet, 12);    // first element
    searchElement(aSet, 93);    // last element
    searchElement(aSet, 41);    // element somewhere in the middle
    searchElement(aSet, 999);   // element not in the set

    cout << endl;
    return 0;
}*/