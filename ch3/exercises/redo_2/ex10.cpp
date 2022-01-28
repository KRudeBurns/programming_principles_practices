/*
10 Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use an if-statement to figure out which operation the user wants,
for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations
called +, –, *, /, plus, minus, mul, and div with their obvious meanings.

*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Program reads in your input and return 0s the right computation\n";
    string op;
    double num1, num2;
    cin >> op >> num1 >> num2;

    if (op == "+")
    {
        cout << num1  << " + " << num2 <<  " = " << num1 + num2;
        return 0;
    }

    if (op == "-")
    {
        cout << num1 <<  " - " << num2 << " = " ;
        cout << num1 - num2;
        return 0;
    }

    if (op == "*")
    {
        cout << num1 <<  " * " << num2 << " = " ;
        cout << num1 * num2;
        return 0;
    }

    if (op == "/")
    {
        cout << num1 <<  " / " << num2 << " = " ;
        cout << num1 / num2;
        return 0;
    }

    //only prints if entry is invalid
    cout << "Invalid entry\n";
}