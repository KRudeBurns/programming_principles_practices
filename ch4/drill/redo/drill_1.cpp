#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them.
Exit the program when a terminating '|' is entered.
*/
int main() {

    int num1 = 0, num2 = 0;
    cout << "Enter the numbers you want to see ('|' to quit): ";

    while(cin >> num1 >> num2)    
    {
        cout << num1 << " " << num2 << endl;

        cout << "Enter the two numbers for you ('|' to quit): \n";
    }

    
}