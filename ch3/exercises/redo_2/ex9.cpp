/*
Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. When the user
inputs a number, the program should print out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out
not a number I know if the user enters something that doesn’t correspond, such as stupid computer!
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << "------------------------------------------------------------\n";
    cout << "This program converts spelled out single numbers into digits\n";
    cout << "-------------------------------------------------------------\n";

    string num;
    cout << "Spell out a number: ";
    cin >> num;
    //convert to lower case
    transform(num.begin(), num.end(), num.begin(), ::tolower);

    if (num == "one")
        cout << "you entered 1";
    else if (num == "two")
        cout << "you entered 2";
    else if (num == "three")
        cout << "you entered 3";
    else if (num == "four")
        cout << "you entered 4";
    else if (num == "five")
        cout << "you entered 5";
    else if (num == "six")
        cout << "you entered 6";
    else if (num == "seven")
        cout << "you entered 7";
    else if (num == "eight")
        cout << "you entered 8";
    else if (num == "nine")
        cout << "you entered 9";
    else if (num == "zero")
        cout << "you entered 0";
    else
        cout << "You input is not valid for this test!\n";
}