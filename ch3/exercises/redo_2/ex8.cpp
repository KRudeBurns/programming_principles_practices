/*
8 Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and
complete. In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even
number. Hint: See the remainder (modulo) operator in §3.4.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "--------------------------------------------------\n";
    cout << "This program tests your input if it odd or even\n";
    cout <<"----------------------------------------------------\n";

    int num;
    cout << "Enter a number and I will tell you if it is odd or even\n";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is an even number!\n";
    }
    else 
    {
        cout << num << " is an odd number!\n";
    }
}