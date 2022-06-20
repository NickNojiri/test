/**
    CS 150 Inheritance Exercises
    @version Spring 2018
*/
#include <iostream>
#include <string>
using namespace std;
#include "stack.h"




// An RPN calculator
int main()
{
    cout << "A Reverse Polish Notation (RPN) Calculator" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Enter an RPN expression like: 1 2 4 * +" << endl;
    cout << "Enter p to print the current value, and q to quit" << endl;
    cout << "> ";

    Stack values;
    string input;

    while (cin >> input)
    {
        if (input == "+" || input == "-" || input == "*" || input == "/")
        {
            if (values.size() < 2)
            {
                cerr << "Invalid stack size or contents." << endl;
                return - 1;
            }

            auto second = values.top();
            values.pop();
            auto first = values.top();
            values.pop();

            switch (input[0])
            {
                case '+': values.push(first + second); break;
                case '-': values.push(first - second); break;
                case '*': values.push(first * second); break;
                case '/': values.push(first / second); break;

            }
        }
        else if (input == "p") // print
            cout << values.top() << endl << "> ";
        else if (input == "q") // quit
        {
            cout << endl << "--done--" << endl;
            return 0;
        }
        else
            values.push(stod(input));
    }


    return 0;
}

