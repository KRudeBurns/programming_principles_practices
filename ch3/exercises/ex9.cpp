#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
9 Write a program that converts spelled-out numbers such as 
“zero” and “two” into digits, such as 0 and 2. When the user
inputs a number, the program should print out the corresponding digit.
Do it for the values 0, 1, 2, 3, and 4 and write out not a number 
I know if the user enters something that doesn’t correspond, 
such as stupid computer!.
*/
int main() {
    string num = " ";
    cout << "Enter a spelled out number between 0 - 9: ";
    cin >> num;
    
    //convert the string to lower case *from stackoverflow*
    transform(num.begin(), num.end(), num.begin(), ::tolower);
    cout << num << '\n';

    //compare and convert
    if(num == "one") cout << 1;
    else if (num == "two") cout << 2;
    else if (num == "three") cout << 3;
    else if (num == "four") cout << 4;
    else if (num == "five") cout << 5;
    else if (num == "six") cout << 6;
    else if (num == "seven") cout << 7;
    else if (num == "eight") cout << 8;
    else if (num == "nine") cout << 9;
    else if (num == "zero") cout << 0;
    else cout << "wrong";
}