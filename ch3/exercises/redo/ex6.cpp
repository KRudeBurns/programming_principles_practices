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

/* Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence
separated by commas. So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same,
they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5. */

int main()
{
    int val1 = 0, val2 = 0, val3 = 0;

    while (cin >> val1 >> val2 >> val3)
    {
        if (val1 > val2)
            if (val1 > val3)
                if (val2 > val3)
                    cout << val3 << " " << val2 << " " << val1 << endl;
                else
                    cout << val2 << " " << val3 << " " << val1 << endl;
            else
                cout << val2 << " " << val1 << " " << val3 << endl;
        else
        {
            if (val2 > val3)
                if (val1 > val3)
                    cout << val3 << " " << val1 << val2 << endl;
                else
                    cout << val1 << " " << val3 << " " << val2 << endl;
            else
                cout << val1 << " " << val2 << " " << val3 << endl;
        }
    }
}