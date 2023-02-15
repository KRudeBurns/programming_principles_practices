#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
Declare a char variable called friend_sex and initialize 
its value to 0.
Prompt the user to enter an m if the friend is male and
an f if the friend is female. 
Assign the value entered to the variable friend_sex.
Then use two if-statements to write the following:
- If the friend is male, write “If you see friend_name please
ask him to call me.”
- If the friend is female, write “If you see friend_name please
ask her to call me.”

*/

int main() {
    string first_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    
    string friend_name;
    cout << "Enter your friend's name: ";
    cin >> friend_name;
    
    char friend_sex = 0;
    string friend_gender {0};
    cout << "Is your friend <m>ale of (f)emale: ";
    cin >> friend_sex;
        if(friend_sex == 'm')
        {
            friend_gender = "him";
        } else
        {
            friend_gender = "her";
        }
        
    

    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? I am fine. I miss your smile!\n"
         << "\tHave you seen " << friend_name << " lately? "
         << "If you see " << friend_gender <<" please have "
         << friend_gender << " call me. I have a grave matter to discuss.\n";         
}