#include <iostream>
#include <string>
using namespace std;


string STUDENT = "nnojiri";  // Add your Canvas login name

// Write your function here
void season(int month , int day)
{
    
    string season;
    
    
    if (month>12 or month<0 or day>31 or day<1){
        season = "invalid input "  ;  
    }
    else if ((month==12)and (day>=16)){
        
        season = "Winter";
    }
     else if(month==3 and day<=15){
        
        season = "Winter";
    }
    else if ((month==12)and (day<=15)){
        
        season = "Fall";
    }
    else if (month==9 and day>=16){
        
        season ="Fall";
    }
    else if(month==3 and day>=16){
       
        season = "Spring";;
    }
    else if (month == 6 and day<=15){
        
        season = "Spring";
    }
    else if (month == 6 and day>=16){
      
        season = "Summer";
    }
    else if (month == 9 and day<=15 ) {
        
        season = "Summer";
    }
    else if (month==1 or month==2){
    
        season = "Winter";
    }
    else if (month==4 or month==5){
        season = "Spring";
    }
    else if (month == 7 or month== 8){
        season ="Summer";
    }
    else{
        season= "Fall";
    }
    cout<<season;
    return;


}