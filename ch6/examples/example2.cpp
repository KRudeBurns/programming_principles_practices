#include "C:\Users\kufre\git\Studying\Languages\C++\a_PPAP-C++\std_lib_facilities.h"

/*
This example 6.3.2 is the second attemt at making the calculator.
I initialized all declared variables. It is built on the 6.3.1 calc app.

We are going to allow more operations, and also add chaining to perform chained 
calculations
*/
int main()
{
    cout << "Please enter expression (we can handle +,-,* and /)\n ";
    cout << "enter x to end your expression (eg, 1+2+3x): ";
    int lval = 0;
    int rval;

    cin >> lval; //read leftmost operand
    if (!cin)
    {
        cout << "No first operand";
        return -1;
    }

    for (char op; cin >> op;) //read the operator and right hand operand
    {
        if (op != 'x')
            cin >> rval; //if op !x then read in rval
        if (!cin)
        {
            cout << "No second operand!";
            return -1;
        }

        switch (op)
        {
        case '+':
            lval += rval;
            break;

        case '-':
            lval -= rval;
            break;

        case '*':
            lval *= rval;
            break;

        case '/':
            lval /= rval;
            break;

        default: //print result
            cout << "Result: " << lval << "\n";
            return 0;
        }
    }

   error("Bad expression!");
    
}