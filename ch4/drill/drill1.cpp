#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
1. Write a program that consists of a while-loop that
 (each time around the loop) reads in two ints and then prints them.
Exit the program when a terminating '|' is entered
*/
int main() {
    int a = 0, b = 0;
    cout << "Enter two integer values: ";
    while (cin >> a >> b)
    {
        
        cout << a << " " << b << '\n';
        cout << "Enter two integer values: ";
    }
}