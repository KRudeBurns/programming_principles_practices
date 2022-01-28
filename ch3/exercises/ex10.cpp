#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
10 Write a program that takes an operation followed by two 
operands and outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use 
an if-statement to figure out which operation the user wants,
for example, if (operation=="+"). Read the operands into variables
 of type double. Implement this for operations called +, –, *, /, 
 plus, minus, mul, and div with their obvious meanings.

*/
int main() {
    char ops = '0';
    double num1 = 0.0, num2 = 0.0;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> ops;
    cout << "Enter two numbers to operate on: ";
    cin >> num1 >> num2;

    double result = 0;

    if (ops == '+') result = num1 + num2;
    else if (ops == '-') result = num1 - num2;        
    else if (ops == '*') result = num1 * num2;
    else if (ops == '/') result = num1 / num2;
    else throw '1';

    cout << num1 << " " << ops << " " << num2 << " = " << result << '\n';           
}