#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
2 Write a program in C++ that converts from miles to kilometers.
Your program should have a reasonable prompt for the
user to enter a number of miles. 
Hint: There are 1.609 kilometers to the mile.
*/
int main() {
    double distance = 0.0, converted_distance = 0.0;
    char unit = '0';
    
    cout << "Enter distance to convert "
         << "followed by unit(<m>iles and <k>ilometers): ";
    while (cin >> distance >> unit)
    {        
        if (unit == 'm')
        {
            converted_distance = 1.609344 * distance;
            cout << distance << " miles = " << converted_distance << "km\n";
        }
        else if (unit == 'k')
        {
            converted_distance = 0.621371 * distance;
            cout << distance << " kilometers = " << converted_distance << "m\n";
        }
        else
        {
            cout << "Enter a proper unit <m>iles and <k>ilometers\n";
            throw 'x';
        }

         cout << "Enter distance to convert "
              << "followed by unit(<m>iles and <k>ilometers): "
              << "Use Ctrl + C to quit\n ";
    }
}