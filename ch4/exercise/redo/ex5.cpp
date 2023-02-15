#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}
/*
Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math
operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter
three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and
'+', the program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 we look at a much more
sophisticated simple calculator.

*/
int main()
{
    double op1, op2;
    char ops;
    cout << "Enter two numbers and one of following operations: +, *, -, or / : ";

    while (cin >> op1 >> op2 >> ops)
    {

        if (ops == '+')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 + op2;
        }
        else if (ops == '-')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 - op2;
        }
        else if (ops == '*')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 * op2;
        }
        else if (ops == '/')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 / op2;
        }
        else
        {
            cout << "invalid operation requested. Now terminating!\n";
            return -1;
        }

        cout << "\nEnter two numbers and one of following operations: +, *, -, or /  "
             << "[use | to quit]: ";
    }
}