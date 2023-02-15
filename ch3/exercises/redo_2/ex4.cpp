#include <iostream>
using namespace std;

/*
4 Write a program that prompts the user to enter two integer values. 
Store these values in int variables named val1 and val2. 
Write your program to determine the smaller, larger, sum, difference, 
product, and ratio of these values and report them to the user.
*/

int main() {

    cout << "\n----------------------------------------------------------------\n";
    cout << "This program compares and works with two user inputted numbers\n";
    cout << "\n----------------------------------------------------------------\n";

    int val1 = 0, val2 = 0;

    cout << "Enter two numbers: ";
    cin >> val1 >> val2;

    if (val1 > val2)
    {
        cout << val1 << " > " << val2 << "\n";
    }

    if (val1 < val2)
    {
        cout << val1 << " < " << val2 << "\n";
    }

    if (val1 == val2)
    {
        cout << val1 << " == " << val2 << "\n";
    }

    cout << val1 << " - " << val2 << " = " << abs(val1 - val2)  << "\n";
    cout << val1 << " + " << val2 << " = " << val1 + val2  << "\n";
    cout << val1 << " x " << val2 << " = " << val1 * val2  << "\n";
    cout << val1 << " / " << val2 << " = " << val1 / val2  << "\n";

}