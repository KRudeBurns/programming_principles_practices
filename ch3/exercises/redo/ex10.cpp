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
Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use an if-statement to figure out which operation the user wants,
for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations
called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

int main()
{
    //one operation and two operands 
    string ops = " ";
    double op1 = 0, op2 = 0, result = 0;

    //request user input
    cout << "Please enter an operation (+, -, *, /, %) \n "
         << "Followed by two numbers: ";
    
    //while loop to read input
    //conditionals, if op == [valid_entry]
    //perform relevant operation on two operands
    //else request the entry again
    while (cin >> ops >> op1 >> op2)
    {
        if(ops == "+")
        {
            result = op1 + op2;
            cout << op1 << ops << op2 << " = " << result << endl;
        }
        else if (ops == "-")
        {
            result = op1 - op2;
            cout << op1 << ops << op2 << " = " << result << endl;
        }
        else if (ops == "*")
        {
            result = op1 * op2;
            cout << op1 << ops << op2 << " = " << result << endl;
        }
        else if (ops == "/")
        {
            result = op1 / op2;
            cout << op1 << ops << op2 << " = " << result << endl;
        }
        else if (ops == "%")
        {
            result = int(op1) % int(op2);
            cout << op1 << ops << op2 << " = " << result << endl;
        }
        else
        {
            cout << "Your entry is invalid, try again\n";
        }

        cout << "Please enter an operation (+, -, *, /, %) \n"
             << "Followed by two numbers: ";
    }
   //end-loop

}