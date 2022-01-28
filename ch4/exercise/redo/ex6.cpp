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
6. Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a digit to
its corresponding spelled-out value; e.g., the input 7 gives the output seven. Have the same program, using the same
input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/
int main()
{
    vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int entries;

    while (cin >> entries)
        switch (entries)
        {
        case 0:
            cout << values[0] << '\n';
            break;
        case 1:
            cout << values[1] << '\n';
            break;
        case 2:
            cout << values[2] << '\n';
            break;
        case 3:
            cout << values[3] << '\n';
            break;
        case 4:
            cout << values[4] << '\n';
            break;
        case 5:
            cout << values[5] << '\n';
            break;
        case 6:
            cout << values[6] << '\n';
            break;
        case 7:
            cout << values[7] << '\n';
            break;
        case 8:
            cout << values[8] << '\n';
            break;
        case 9:
            cout << values[9] << '\n';
            break;
            default:
            cout << "invalid input" << '\n';
            break;
        }
}