#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
5. Change the program so that it writes out the numbers are 
almost equal after writing out which is the larger and the
smaller if the two numbers differ by less than 1.0/100.
*/
int main() {
    double a = 0.0, b = 0.0, difference = 1.0/100;
    cout << "Enter two numbers: ";
    while (cin >> a >> b)
    {        
        if (a < b)
        {
            cout << "The smaller value is " << a << "\n"
                 << "The larger value is " << b << "\n";
        }
        else if (a == b)
        {
            cout << "Both values are equal\n";
        }
        else if (abs(a-b) < difference)
        {
            cout << "Both values are almost equal\n";
        }
        else
        {
            cout << "The smaller value is " << b << "\n"
                 << "The larger value is " << a << "\n";
        }
        
        cout << "Enter two numbers: ";
    }
}