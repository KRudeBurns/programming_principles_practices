#include "C:\Users\kufre\git\Studying\Languages\C++\a_PPAP-C++\std_lib_facilities.h"

/*
This example 6.3.1 first attempt at making the calculator.
I initialized all declared variables. 
*/
int main()
{
    cout << "Please enter expression (we can handle + and -): ";
    int lval = 0;
    int rval = 0;
    char op = ' ';
    int result = 0;
    cin >> lval >> op >> rval;

    if (op == '+')
        result = lval + rval;
    else if (op == '-')
        result = lval - rval;

    cout << "Result: " << result << "\n";

    return 0;
}