#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
3. Now prompt the user for the name of another friend, 
and store it in friend_name. Add a line to your letter: 
“Have you seen friend_name lately?”
*/

int main() {
    string first_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    
    string friend_name;
    cout << "Enter your friend's name: ";
    cin >> friend_name;

    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? I am fine. I miss your smile!\n"
         << "\tHave you seen " << friend_name << " lately?"; 
}