/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "nnojiri"; // Add your Canvas/occ-email ID

#include "h18.h"

// Place your function here

string clean(const string& w ){
    
    int len = w.size(); string temp = "";
    for(int i =0 ; i < len ;i ++){
        
        if(!ispunct(w.at(i))){temp+= tolower(w.at(i));}//
    }
        return temp;
    }
    
vector<Word> spellCheck(istream& in,const vector<string>& dictionary, const vector<string>& excluded)
    {
        vector<Word> result;
        while(!in.eof())
        {
            
        int curr = in.tellg();// Returns the position of the current character in the input stream.
        if(curr == -1 )
        {
            break;
        }
        
        string w ="";
        in>>w>>ws;// reads the next value with no white spaces
        w = clean(w);// clean
        
        try{// ex
            int resultslen = result.size();
            for(int i = 0 ; i <resultslen ; i++)
            {
                if(w == result.at(i).word)
                {
                    result.at(i ).positions.push_back(curr);
                    throw 1;//valeu thrown
                }
            }
            int ex = excluded.size();
            int dictlen = dictionary.size();
            for(int i = 0; i < dictlen; i++  ){
                if(w == dictionary.at(i)){
                    throw 1 ;
                    
                }
            }
        }
        catch(...){
            continue;
        }
        
        Word test ;
        test.word =w;
        test.positions = {curr};// cant = must use {} to initalize
        
        result.push_back(test);// using the dot op we can use the memebr func push_back to append the vector result
    }
    return result;
    }

/////////////// STUDENT TESTING ////////////////////
vector<string> fileToWords(const string& filename);
#include <sstream>
#include <iomanip>
int run()
{
    cout << "Student testing" << endl;
    // vector<string> dictionary = fileToWords("words");
    // vector<string> ignore = fileToWords("excluded.txt");
    // istringstream words("Now is the tyme for all good studunts to "
    //     "come to the aiid of their ai!id classmaates.");
    // vector<Word> misspelled = spellCheck(words, dictionary, ignore);
    // cout << "Misspelled words" << endl;
    // int i{1};
    // for (const auto& e : misspelled)
    // {
    //     cout << setw(4) << i++ << ". " << e.word << ", [ ";
    //     for (auto pos : e.positions)
    //         cout << pos << " ";
    //     cout << "]" << endl;
    // }

    return 0;
}