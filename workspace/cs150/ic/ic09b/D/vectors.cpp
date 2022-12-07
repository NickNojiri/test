#include <vector>
#include <string>
using std::string;
using std::vector;

string STUDENT = "nnojiri"; // Your Canvas ID goes here

#include "vectors.h"
// Add your implementation here

/**
    Write the procedure swapEnds().

    @param[in,out] nums a vector of int.

    If the vector length is greater than 0, then
    swap the first and last elements.
*/
void swapEnds(std::vector<int>& nums)
{
    if(nums.size() > 1)
    {
        int temp = nums.front();
        nums.front() =nums.back();
        nums.back() = temp;

    }
}

/**
    Write the function matchUp().

    Given vector<int> nums1 and nums2 of the same
    length, for every element in nums1, consider
    the corresponding element in nums2 (at the
    same index). Return the count of the number
    of times that the two elements differ by 2
    or less, but are not equal.

    Some examples:
        matchUp({1, 2, 3}, {2, 3, 10}) returns 2
        matchUp({1, 2, 3}, {2, 3, 5}) returns 3
        matchUp({1, 2, 3}, {2, 3, 3}) returns 2

    @param[in] nums1 a vector of int
    @param[in] nums2 a vector of int
    @return number of matches as described above.
*/
int matchUp(const std::vector<int>& nums1, const std::vector<int>& nums2)
{
    int result = 0 ;

    for(size_t i =0 , len = nums1.size(); i < len ; ++i)
    {
        if(nums1.at(i)!= nums2.at(i) && abs(nums1.at(i) - nums2.at(i)) <=2 )
        {
            result++;
        }
    }
    return result;

}

/**
    Write the function copyEvens().

    Given a vector of positive ints, return a new
    vector array of length "count" containing the
    first even numbers from the original vector.
    The original vector will contain at least
    "count" even numbers.

    Some examples:
        copyEvens({3, 2, 4, 5, 8}, 2) returns {2, 4}
        copyEvens({3, 2, 4, 5, 8}, 3) returns {2, 4, 8}
        copyEvens({6, 1, 2, 4, 5, 8}, 3) returns {6, 2, 4}

    @param[in] nums a vector of int
    @param[in] ecount the number of even numbers in the returned vector
    @return a vector containing count even numbers.
*/
std::vector<int> copyEvens(const std::vector<int>& nums, size_t ecount)
{
    vector<int> result;
    size_t i = 0;
    while(result.size() < ecount)
    {
        if(nums.at(i)% 2 == 0){
            result.push_back(nums.at(i));
        }
        i++;
    }
    return result;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}
