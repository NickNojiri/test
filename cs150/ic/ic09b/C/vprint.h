#ifndef VPRINT_H
#define VPRINT_H

#include <vector>
#include <iostream>
#include <string>

// put your generic print function here
template<typename T>
void print(std::ostream& out, const std::vector<T>& v){
    out << "[";
    if(v.size()> 0 ){
        out<< v.at(0);
        for(size_t i = 1, len = v.size(); i < len; ++ i ){
            out<< ", " << v.at(i);
        }
    }
    out<<"]";
    
}
#endif
