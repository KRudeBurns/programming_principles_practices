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

/*
The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out a table of characters with their
corresponding integer values:
a 97
b 98
. . .
z 122
*/

int main()
{
    int char_to_int = 0, size = 100;
    char a_char = ' ';

    //print a char and cast it to an int
    cout << "Enter a character, and I will print it and the 99 prior: ";
    cin >> a_char;

    cout << "character\t"
         << "int value\n";
    cout << "---------\t"
         << "----------\n";

    int i = 0;
    while (i < size)
    {
        char_to_int = int(a_char-i);
        cout << char(a_char - i) << "\t\t" << char_to_int << endl;
        ++i;
    }
}