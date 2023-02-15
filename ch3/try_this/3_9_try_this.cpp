#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

//demonstrating unsafe conversions
int main() {
    int a = 2000;
    char c = a; //try to squeeze a larg into into a small char
    int b = c;
    if (a != b)
    {
        cout << "oops " << a << " != " << b << endl;
    }
    else 
    {
        cout << "Wow we have large characters \n";
    }
    
    
}