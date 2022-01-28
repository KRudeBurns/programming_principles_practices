#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
7. Add “Yours sincerely,”
followed by two blank lines for a signature, followed by your name.

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

    string age_rejoinder{0};
    if(age < 12)
    {
        int new_age = age+1;
        string new_age_string = to_string(new_age);

        age_rejoinder="Next year you will be " + new_age_string
                      + " I cant wait to see you.\n";
        //age_rejoinder = age_prejoinder+new_age;

    }
    else if (age == 17)
    {
        age_rejoinder = "Next year you will be able to vote. I cant wait to see you then\n";
    }
    else if (age > 70)
    {
        age_rejoinder = "I Hope you are enjoying retirement\n";
    }


    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? I miss your smile!\n"
         << "\tHave you seen " << friend_name << " lately? "
         << "If you see " << friend_gender <<" please have "
         << friend_gender << " call me. I have a grave matter to discuss.\n"
         << "\tI heard you just turned " << age << " Congratulations. More life to you, my friend! "
         << age_rejoinder
         << "\nSincerely, \n\n" << "Ebube";
}

simple_error(int x){
    if (x < 1 || x > 110) {
        cout << "You are kidding about the age!!\n";
        throw 1;
    }
}
