#ifndef H10_H_
#define H10_H_
/**
    @file h10.h
    @author
    @version
*/
#include <string>

// Place your prototypes here
bool read(const std::string& agePrompt, int& age, bool check = true);
bool  read(const std::string& gpaPrompt,double& gpa, bool check = true);
bool  read(const std::string& namePrompt,std::string& name, bool check = false);
bool read(char& ch, char dot);

#endif
