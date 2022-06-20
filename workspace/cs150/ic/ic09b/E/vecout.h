#ifndef VECOUT_H
#define VECOUT_H

#include <vector>
#include <iostream>
#include <string>

// put your generic output operator
template <typename T>
std::ostream& operator<<(std::ostream& out , const std::vector<T>& v )
{
    out << "[";
    if(v.size()>0){
        out << v.at(0);
        for(size_t i =1 , len = v.size();i<len; ++i){
            out << ", "<< v.at(i);

        }
    }

    out<<"]";
    return out;
}


#endif
