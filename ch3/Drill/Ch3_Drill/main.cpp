#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter your friends first name ('followed by enter'):\n";
    string first_name;
    cin >> first_name;

    cout << "Enter your friend's age: ('followed by enter'):";
    int age;
    cin >> age;

    cout << "Please enter a mutual friend's name (followed by enter): \n";
    string friends_name;
    cin >> friends_name;

    cout << "Also enter your mutual friends gender (m/f || followed by enter): \n";
    char friend_sex;
    cin >> friend_sex;

    string gender = " ";
    while (gender == " ")
    {
        if(friend_sex == 'm')
            gender = "he";
        else if(friend_sex == 'f')
                    gender = "she";
        else
        {
            cout << "Enter your friends gender (m/f || followed by enter): \n";
            cin >> friend_sex;
        }
    }

    cout << "Dear " << first_name << ",\n";
    cout <<"\tHow are you? I miss you terribly.\n";
    cout << "Have you seen " << friends_name << "lately?"
         << " If you see " << friends_name << " Please ask if " << gender
         << " could please call me\n\n";

    if(age < 12)
    {
        cout << "\tNext year you will be " << age + 1 << "!!";
        cout << " I can't wait for the birthday party! I have a good gift for you!\n\n";
    }
    else if (age == 17)
    {
        cout << "\tNext year you will be able to vote!!!";
        cout << " Lets go together when you register to vote! \n\n";
    }
    else if (age > 70)
    {
        cout << "\tI hope you are enjoying retirement!";
        cout << " Lets go get a beer when I get into town! \n\n";
    }
    else
    {
        cout << "\tI hope you are enjoying your busy year!";
        cout << " Lets go get a beer when I get into town! \n\n";
    }



}
