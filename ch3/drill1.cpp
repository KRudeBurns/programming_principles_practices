#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
. This drill is to write a program that produces a simple
 form letter based on user input. Begin by typing the code
 from §3.1 prompting a user to enter his or her first name
 and writing “Hello, first_name” where first_name is the name
entered by the user.

Then modify your code as follows: change the prompt to
“Enter the name of the person you want to write to”
and change the output to “Dear first_name,”.
Don’t forget the comma.
*/

int main() {
    string first_name;
    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Dear " << first_name << ",\n";
    keep_window_open();
}
