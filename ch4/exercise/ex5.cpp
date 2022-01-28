#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
5. Write a program that performs as a very simple calculator.
 Your calculator should be able to handle the four basic math
 operations — add, subtract, multiply, and divide — on two input values.
 Your program should prompt the user to enter three arguments: 
 two double values and a character to represent an operation. 
 If the entry arguments are 35.6, 24.1, and '+', 
 the program output should be The sum of 35.6 and 24.1 is 59.7.  
*/

int main() {
    //declare input values
    double in1 = 0.0, in2 = 0.0;
    char ops= ' ';

    //request user input
    cout << "Enter two numbers and an operation(+, -, *, /, ^)"
         << " example: '3  15 +' will be 3+15 = 18 "
         << "use | to stop:  ";
    while (cin >> in1 >> in2 >> ops) {
        if (ops == '+'){
            cout <<in1 << ops << in2 << " = " << in1 + in2 << '\n';
        }
        else if (ops == '-'){
            cout <<in1 << ops << in2 << " = " << in1 - in2 << '\n';
        }
        else if (ops == '*'){
            cout <<in1 << ops << in2 << " = " << in1 * in2 << '\n';
        }
        else if (ops == '/'){
            cout <<in1 << ops << in2 << " = " << in1 / in2 << '\n';
        }
        else if (ops == '^'){
            cout <<in1 << ops << in2 << " = " << pow(in1, in2) << '\n';
        }
        else{
          cout << "ending operation: \n";
          break;
        }
        cout << "Enter two numbers and an operation(+, -, *, /, ^)"
             << " example: 3 + 15 = 18 "
             << "use | to stop:  ";
    }
}