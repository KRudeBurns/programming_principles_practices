#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
4 Write a program that prompts the user to enter two integer values. 
Store these values in int variables named val1 and val2.
Write your program to determine the smaller, larger, sum, difference,
product, and ratio of these values and report them to the user.
*/
int main() {
    int val1 = 0, val2 = 0;
    cout << "Enter two integers: ";
    cin >> val1 >> val2;

    if(val1 > val2)
        cout << val1 << " > " << val2 << "\n\n";
    else if (val1 == val2)
        cout << val1 << " = " << val2 << "\n\n";
    else
        cout << val1 << " < " << val2 << "\n\n";

    int sum = val1 + val2;
    cout << val1 << " + " << val2 << " = " << sum << "\n";

    int diff = val1 - val2;
    cout << val1 << " - " << val2 << " = " << diff << "\n";

    int product = val1 * val2;
    cout << val1 << " x " << val2 << " = " << product << "\n";

    double ratio = (double)val1 / (double)val2;
    cout << val1 << "/" << val2 << " = " << ratio << "\n";
}