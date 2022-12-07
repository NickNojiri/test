/**
    @file h15.h
    @author Your name
    @data Semester and Section
*/
#ifndef H15_H_
#define H15_H_
#if __cplusplus <= 199711l //202002L  https://stackoverflow.com/questions/11053960/how-are-the-cplusplus-directive-defined-in-various-compilers


#include <sstream>// out
#include <string>
#include <iostream>

template<typename T>// define
std::string to_string(const T& value){
    std::ostringstream out;
    out << std::fixed << (0+value);
    return out.str();
    
}
#endif
#endif
//very cool teach me more c++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>++>>

