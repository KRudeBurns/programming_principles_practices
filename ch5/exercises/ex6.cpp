#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

/*
. Write a program that converts from Celsius to Fahrenheit and from Fahrenheit to Celsius (formula in §4.3.3). Use
estimation (§5.8) to see if your results are plausible.

*/

double ctof(double c)
{
    //error check for absolute zero of celsius
    if (c < -273.15)
    {
        cout << "Invalid celsius temp\n";
        throw -1;
    }

    double f = (c * 9 / 5) + 32;
    return f;
}

double ftoc(double f)
{
    //error check for absolute zero of fahrenheit
    if (f < -459.67)
    {
        cout << "Invalid fahrenheit temp\n";
        throw -1;
    }

    double c = (f - 32) * 5 / 9;
}

int main()
{
    double c = 0;
    cout << "Enter Celsius temp: ";
    cin >> c;
    double f = ctof(c);
    cout << f << " Fahrenheit\n";

    double fahr;
    cout << "Enter Fahrenheit temp: ";
    cin >> fahr;
    double celcius = ftoc(fahr);
    cout << celcius << " Celsius\n";
}