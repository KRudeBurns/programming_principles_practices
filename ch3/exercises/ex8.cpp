#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
8. Write a program to test an integer value to determine 
if it is odd or even. As always, make sure your output is clear and
complete. In other words, don’t just output yes or no.
Your output should stand alone, like The value 4 is an even number. 
Hint: See the remainder (modulo) operator in §3.4.
*/
int main() {
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    //odd or even
    if (num % 2 == 0) {
        cout << "Your entry, " << num << ", is even\n\n";
    } else
    {
        cout << "Your entry, " << num << ", is odd\n\n";
    }    
}