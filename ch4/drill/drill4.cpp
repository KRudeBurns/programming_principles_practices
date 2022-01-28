#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
4. Change the program so that it uses doubles instead of ints.
*/
int main() {
    double a = 0.0, b = 0.0;
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
        else
        {
            cout << "The smaller value is " << b << "\n"
                 << "The larger value is " << a << "\n";
        }
        
        cout << "Enter two numbers: ";
    }
}