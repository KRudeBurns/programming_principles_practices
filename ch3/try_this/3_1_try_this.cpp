/*
Get the “name and age” example to run. Then, modify it to write out the age in months: read the input in years and
multiply (using the * operator) by 12. Read the age into a double to allow for children who can be very proud of
being five and a half years old rather than just five.

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "???";
    double age = -1.0;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age*12 << " months)\n";
}