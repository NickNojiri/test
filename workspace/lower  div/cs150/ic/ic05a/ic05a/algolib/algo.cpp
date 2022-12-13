// Your implementation goes here
#include "algo.h"
#include <cmath>
using namespace std;


namespace aa{
    int gcd(int a, int b){
        
        while(b!= 0 ){
            int temp = b ; 
            b= a % b ; 
            a = temp ; 
        }
        return a;
    }

    double sqrt(double num ){
        const double kEps = 1.0e-14;
        double newGuess = 42;
        double oldGuess;
        
        
        do {
            oldGuess = newGuess;
            newGuess = ((num /oldGuess)+oldGuess) / 2;
            
        } while(abs(newGuess-oldGuess)>kEps) ;
        return newGuess;
    }

    void pi(unsigned& n, unsigned& d){
        const double TSU = 355.0/ 113.0;
        const double PI = acos(-1.0);
        const double EPS = abs(TSU - PI);
        
        double approx = static_cast<double>(n) / d ;
        
        while(abs(approx - PI) >= EPS){
            if(approx> PI){
                ++d;
            }
            else{
                ++n;
            }
            approx = static_cast<double>(n) / d ;
            
        }
    }
}