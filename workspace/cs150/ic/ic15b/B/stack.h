#ifndef STACK_H
#define STACK_H
#include <stack>
#include <vector>


//using Stack = std::stack<double>;

// Exercise 1 - Use public inheritance to
//              derive Stack from vector
/*class Stack : public std::stack<double>
{
public:
    //2s 1 g
    void push(double d ) { push_back(d);};
    
    void pop() {pop_back();};
    double top() const {return back() ;};
};
*/

/*{
public:
    
    //2s 1 g
    void push(double d ){ push(d);}
    void pop() {pop_back();}
    double top const {return v.back(); }
    double end const{return v.empty()}
private: 
    vector<double> v;
};*/


//100001;// Exercise 2 - Use composition (layering) to
//              implement Stack in terms of vector
//public:
//         void push(double d) { v.push_back(d); };
//         void pop() { v.pop_back(); };
//         // bool empty() const { return v.empty(); }
//         size_t size() const { return v.size(); }
//         double top() const { return v.back(); }
//     private:
//         vector<double> v;
// };
// Exercise 3 - Use private inheritance to
//              implement Stack in terms of vector
// The using keyword is used to:

// Bring a specific member from the namespace into the current scope.
// Bring all members from the namespace into​ the current scope.
// Bring a base class method ​or variable into the current class’s scope.
class Stack : public std:: vector<double>
{
    public:
            
//using 
        using vector::size;
        using vector::push_back;
        using vector::back;
        using vector::pop_back;
        void push(double d){push_back(d);};
        void pop(){pop_back();};
        double top() const {return back();};
        
};

#endif
