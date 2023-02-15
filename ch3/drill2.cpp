#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
Add an introductory line or two, like “How are you? 
I am fine. I miss you.” Be sure to indent the first line.
Add a few more lines of your choosing — it’s your letter.
*/

int main() {
    string first_name;
    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Dear " << first_name << ",\n";
    cout << "\t How are you? I am fine. I miss your smile!\n";

    keep_window_open();
}