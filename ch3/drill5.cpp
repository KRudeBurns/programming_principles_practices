#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
Prompt the user to enter the age of the recipient and
assign it to an int variable age. Have your program write “I hear
you just had a birthday and you are age years old.”
If age is 0 or less or 110 or more, call simple_error("you're
kidding!"). using simple_error() from std_lib_facilities.h.

*/
int simple_error(int );

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
        if(friend_sex == 'm' || friend_sex == 'M')
        {
            friend_gender = "him";
        } else if (friend_sex == 'f' || friend_sex == 'F')
        {
            friend_gender = "her";
        }
        else
        {
            cout << "You are kidding about the sex!!\n";
            throw '3';
        }
        
    
    int age;
    cout << "Enter your friend's age: ";
    cin >> age;
    simple_error(age);

    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? I am fine. I miss your smile!\n"
         << "\tHave you seen " << friend_name << " lately? "
         << "If you see " << friend_gender <<" please have "
         << friend_gender << " call me. I have a grave matter to discuss.\n" 
         << "\tI heard you just turned " << age << ". How does it feel to be older!"
         << " Congratulations on a new year. More life to you, my friend!";        
}

simple_error(int x){
    if (x < 1 || x > 110) {
        cout << "You are kidding about the age!!\n";
        throw 1;
    }    
}