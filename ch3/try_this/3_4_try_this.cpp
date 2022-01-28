#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main() {
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second)
    {
        cout << "That's the same name twice\n";
    }
    else if (first < second)
    {
        cout << first << " is alphabetically before " << second << "\n";
    }
    else if (first > second)
    {
        cout << first << " is alphabetically after " << second << "\n";
    }    
}