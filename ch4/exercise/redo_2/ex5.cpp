/* 5. Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math
operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter
three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and
'+', the program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 we look at a much more
sophisticated simple calculator. */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "--------------------------------------------\n";
    cout << "This program is a simple calculator";
    cout << "\n--------------------------------------------\n";

    double num1, num2;
    char op;

    cout << "Enter three entries: num, op, num, op ";
    while (cin >> num1 >> op >> num2)
    {
        switch (op)
        {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;

        default:
            cout << "invalid op entry\n";            
            break;
        }

        cout << "\nEnter three entries: num, op, num \n";
        cout << "use d to quit: ";
    }
}