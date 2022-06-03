#include <vector>
#include <string>
using namespace std;

string STUDENT = "nnojiri"; // Your Canvas ID goes here

/**
 * Write the function unique.
 * @param v a vector<int> (not changed)
 * @return a vector<int> containing unique elements
 * v is not required to be sorted
 */
vector<int> unique(const vector<int>& v){
vector<int> result;
for(auto e1 : v)
{
    bool found = false;
    for(auto e2 :result){
    if(e1 == e2){
        found = true;
        break;
    }
    }
    if(!found ) result.push_back(e1);
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