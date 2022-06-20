#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string STUDENT = "nnojiri"; // Your Canvas ID goes here

/**
 * Write the function unique which removes all duplicates.
 * @param v a vector<int> (changed)
 * @returns the number of duplicates removed.
 * v is not required to be sorted
 * Keep last (not first) of each element.
 */
int unique(vector<int>& v)
{
    int dupes = 0;
    for (size_t i = 0; i<v.size(); ++i) 
    {
        bool found = false;
        for(size_t j = i+1; j < v.size() ; ++j){
            if(v.at(i)==v.at(j))
            {
                found =true;
                break;
                
            }
        }
        if(found) v.erase(v.begin() + i );
        if(found){
            v.erase(v.begin()+i);
            i--;
            dupes++;
        }
    }
    return dupes;
}



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
using namespace std;
int run()
{
    cout << "Student testing" << endl;

    return 0;
}