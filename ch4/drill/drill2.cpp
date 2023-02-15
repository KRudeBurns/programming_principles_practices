#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
2. Change the program to write out the smaller value is: 
followed by the smaller of the numbers and the larger value
is: followed by the larger value.
*/
int main() {
    int a = 0, b = 0;
    cout << "Enter two integer values: ";
    while (cin >> a >> b)
    {
        if (a < b)
        {
            cout << "the smaller value is " << a << "\n"
                 << "the larger value is " << b << "\n";
        }
        else
        {
            cout << "the smaller value is " << b << "\n"
                 << "the larger value is " << a << "\n";
        }
        
        cout << "Enter two integer values: ";
    }
}