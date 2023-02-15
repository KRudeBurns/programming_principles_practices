#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

int main()
{
    string input = " ";
    cout << "Spell out a number from zero to four: ";

    cin >> input;
    //convert the string to lower case *from stackoverflow*
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    if (input == "zero")
        cout << 0 << endl;
    else if (input == "one")
        cout << 1 << endl;
    else if (input == "two")
        cout << 2 << endl;
    else if (input == "three")
        cout << 3 << endl;
    else if (input == "four")
        cout << 4 << endl;
    else
        cout << "What???? " << endl;
}