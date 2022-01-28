#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/* Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the
user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.
 */


int main() {
    double miles = 0;
    double km = 0;

    cout << "Enter miles ";
    cin >> miles;
    km = 1.609 * miles;

    cout << miles << "miles is = " << km << " kilometers\n";
}