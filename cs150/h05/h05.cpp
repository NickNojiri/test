/**
 *  @nick Nojiri
 *  @2022 ss
 *  @file h05.cpp
 */
#include <string>
using namespace std;

string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here
string toFrenchGender(const string& str){
    
    int len = str.size();
    string prefix, result;
    string word = str;
    
    if((str.substr(0,4)!="iles")&&(str[0] == 'A' || str[0] == 'a'
          || str[0] == 'E' || str[0] == 'e'
          || str[0] == 'I' || str[0] == 'i'
          || str[0] == 'O' || str[0] == 'o'
          || str[0] == 'U' || str[0] == 'u')
          and (str.substr(len -2)!="es" ||str.substr(len -2)!="is"
          ||str.substr(len -2)!="os"||str.substr(len -2)!="as") 
          and (str!="Belize"||str!="Cambodge"
          ||str!= "Mexique"||str!= "Mozambique"
          ||str!= "Zaire"||str!= "Zimbabwe")
          and( str !="Israel"
          ||str!="Madagascar"||str!="Sri Lanka"
          ||str!="Singapore"||str!="Monaco"
          ||str!="Cuba" ||str!="Cyprus"))
          {// EXPECTION CASE... ISLAND, CUBA, PLURAL, START WITH VOWEL
          prefix = "l'";
    }
    else if( (str.substr(len -2)=="es" ||str.substr(len -2)=="is"
    ||str.substr(len -2)=="os"||str.substr(len -2)=="as"||str=="Belize"
    ||str=="Cambodge"||str==  "Mexique"||str==  "Mozambique"
    ||str==  "Zaire"||str== "Zimbabwe") 
    || (str =="Israel"||str == "Madagascar"
    ||str== "Sri Lanka"||str==  "Singapore"
    ||str==  "Monaco"||str== "Cuba"||str== "Cyprus" ))
            {// country exceptions
                if((str.substr(len -2)=="es" 
                ||str.substr(len -2)=="is"||str.substr(len -2)=="os"
                ||str.substr(len -2)=="as"||str =="Israel")
                and (str!= "Madagascar"||str!= "Sri Lanka"
                ||str!=  "Singapore"||str==  "Monaco"
                ||str== "Cuba"|| str!= "Cyprus" ))
                {
                prefix ="les ";
                }
                else {
                prefix = "";
                }
            }
    else{ //m/f case
        if(str.back() == 'e'|| str.back()=='o'|| str=="iles Salomon" ) prefix = "la ";//fem
        else  prefix = "le ";// mask
    }
    result = prefix +word;
    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    // You may add any code you like
    // It will be displayed with make run
    return 0;
}
