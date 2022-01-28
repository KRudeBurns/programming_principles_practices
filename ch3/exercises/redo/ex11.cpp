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
Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-
cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent coins). Query the user
separately for the number of each size coin, e.g., “How many pennies do you have?” Then your program should print out
something like this:
Click here to view code image
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/
int main()
{

    // request user entry
    int pennies = 0, nickels = 0, dimes = 0,
        quarters = 0, half_dollars = 0;
    double total = 0;

    cout << "Enter pennies: ";
    cin >> pennies;
    total += pennies;

    cout << "Enter nickels: ";
    cin >> nickels;
    total += (nickels * 5);

    cout << "Enter dimes: ";
    cin >> dimes;
    total += (dimes * 10);

    cout << "Enter quarters: ";
    cin >> quarters;
    total += (quarters * 25);

    cout << "Enter half_dollars: ";
    cin >> half_dollars;
    total += (half_dollars * 50);

    double to_dollars = total / 100; //total to dollars
    int single_unit = 1;      //if entry is single unit, print single unit currency

    //print entry
    if (pennies == single_unit)
        cout << "You have: " << pennies << " penny\n";
    else
        cout << "You have: " << pennies << " pennies\n";

    if (nickels == single_unit)
        cout << "You have: " << nickels << " nickel\n";
    else
        cout << "You have: " << nickels << " nickels\n";

    if (dimes == single_unit)
        cout << "You have: " << dimes << " dime\n";
    else
        cout << "You have: " << dimes << " dimes\n";

    if (quarters == single_unit)
        cout << "You have: " << quarters << " quarter\n";
    else
        cout << "You have: " << quarters << " quarters\n";

    if (half_dollars == single_unit)
        cout << "You have: " << half_dollars << " half-dollar\n";
    else
        cout << "You have: " << half_dollars << " half-dollars\n";

    cout << "Your total is " << total << " pennies\n";
    cout << "or $" << to_dollars << " \n";
}