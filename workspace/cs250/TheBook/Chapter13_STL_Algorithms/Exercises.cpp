/*Note that for the exercises, labs and exams:

You are not required to use the constant iterators cbegin, cend, crbegin and crend. 
You may use auto for iterators (ONLY iterators), unless otherwise indicated.
Exercise 1
Implement the following:

Create an STL vector using the default constructor.
Size the vector to have 5 number of elements, all 0s. Which function should you use?
Use algorithm std::fill to overwrite the last three elements with 9 so that the vector becomes: 0 0 9 9 9
Use algorithm std::fill to overwrite the second and third element with 5, so that the vector becomes: 0 5 5 9 9
Exercise 2
Implement the following:

Create an STL list using the default constructor.
Size the list to have six number of elements, all 0s. Which function should you use?
Use algorithm std::fill to overwrite all the elements with 4, so that the list becomes: 4 4 4 4 4 4
Using algorithm std::fill again to overwrite the last three elements with 200, so that the list becomes: 4 4 4 200 200 200
Exercise 3
Implement the following:

Create an STL vector with elements: 45 95 76 21 35 62 85
Use algorithm std::find to search for 62; save the return value in an iterator--you may declare the iterator using auto.
If the element is found, print the index where the element is located; otherwise, print a message that the element was not found. How can you do this? Try and reason on this to figure it out, before looking at the solution.
Exercise 4
Implement the following:

Create an STL vector with elements: 30 20 10 90 50 80 70 40
Use algorithm std::find to search for 50, but only between 10 and 70 inclusive; save the return value in an iterator--you may declare the iterator using auto.
If the element is found, print the index where the element is located; otherwise, print a message that the element was not found.
Exercise 5
Implement the following:

Create an STL list with elements: 8 7 6 1 3
Use algorithm std::find to search for 1; save the return value in an iterator--you may declare the iterator using auto.
If the element is found, use the function list::insert to insert 100 before 1.
Exercise 6
Implement the following:

Create an STL vector with elements: 1 2 3 2 4 5 2 6 7
Use algorithm std::remove to delete all occurrences of 2; save the return value in an iterator to use later--you may declare the iterator using auto.
Print the vector. What do you see?
Exercise 7
Implement the following:

A unary predicate function named lessOrEqualTo50() that returns true when the int parameter is less or equal to 50.
In the main function:
Create an STL vector with elements: 45 89 12 63 35 10 28 95 67 22
Try and use both vector::erase and algorithm std::remove_if to delete all elements that are less or equal to 50 and resize the vector, all in one statement.
Exercise 8
Implement the following:

Create an STL vector with elements: -1 2 3 -2 4 -7 -5 1 6
Use algorithm std::remove_if to delete all negative integers by using a lambda expression as the third parameter.
Resize the vector using function vector::resize.
Exercise 9
Implement the following:

Create an STL vector with elements: 10 10 62 19 31 10 24 79 10 72
Use algorithm std::replace to overwrite all occurrences of 10 with 1000.
Exercise 10
Implement the following:

A unary predicate function named lessThan10() that returns true when the int parameter is less than 10.
In the main function:
Create an STL vector with elements: 10 10 2 19 31 10 4 9 10 2
Use algorithm std::replace_if to overwrite all elements that are less than 10 with 2000.
Exercise 11
Rewrite the call to function std::replace_if in exercise 10 by calling a lambda expression.

Exercise 12
Implement the following:

Create an STL vector with elements: 1 2 3 4 5
Use algorithm std::reverse to reverse the order of elements in the vector.
Exercise 13
Implement the following:

Create an STL vector with elements: 1 2 3 4 5 6 7 8 9 10
Use algorithm std::reverse to reverse the range: 3 4 5 6 7 8 9
Exercise 14
Implement the following:

Create an STL vector with elements: 1 2 3 4 5 6
Use algorithm std::rotate to rotate the vector to 3 4 5 6 1 2
Exercise 15
Implement the following: 

Create an STL vector with elements 1 2 3 4 5 6 7 8 9 10
Use algorithm std::rotate to rotate the vector so that it becomes: 1 2 3 4 7 5 6 8 9 10
Exercise 16
Implement the following:

Create an STL vector with elements: 9 8 7 6 5 4 3 2 1
Use algorithm std::sort to sort a specific range of the vector so that it becomes: 9 8 2 3 4 5 6 7 1*/