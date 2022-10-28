#include <iostream>
#include <string>
#include <set> // header for both set and multiset

int main()
{
    std::set<std::string> states { "TX", "AZ", "UT" };
    // Note that the states will be stored in
    // alphabetical order by default: AZ, TX, UT.
    
    // Here is another way to declare a set
    // by using an assignment operator.
    std::set<int> numbers = { 6, 3, 8, 1, 2 };
    // Again, the numbers will be rearranged by
    // default in ascending order.
    
    // A range-based FOR loop is a common
    // choice to iterate elements in a set.
    for(const std::string& state : states)
    {
        std::cout << state << " ";
    }
    
    std::cout << "\n";
    
    // It is also very common to use 
    // auto when iterating.
    for (const auto& i : numbers)
    {
        std::cout << i << " ";
    }
    
    return 0;
}