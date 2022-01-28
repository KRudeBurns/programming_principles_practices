#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
3. Augment the program so that it writes the line 
the numbers are equal (only) if they are equal.
*/
int main() {
    int a = 0, b = 0;
    cout << "Enter two integer values: ";
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
        
        cout << "Enter two integer values: ";
    }
}