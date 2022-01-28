#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

/*
11 Write a program that prompts the user to enter some number of
 pennies (1-cent coins), nickels (5-cent coins), dimes (10-
cent coins), quarters (25-cent coins), half dollars (50-cent coins),
and one-dollar coins (100-cent coins). Query the user separately for the
number of each size coin, e.g., “How many pennies do you have?” Then your
program should print out something like this:

You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.

Make some improvements: if only one of a coin is reported, make the
output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
Also, report the sum in dollars and cents, i.e.,
$5.73 instead of 573 cents.
*/
int main() {

    int pennies = 0, nickels = 0, dimes = 0,
        quarters = 0, half_dollars = 0, dollars = 0,
    //sum everything to pennies (used below)
        nickels_to_pennies = 0, dimes_to_pennies = 0,
        quarters_to_pennies = 0, half_to_pennies = 0,
        dollar_to_pennies = 0, total_pennies = 0,
    //convert to dollars and cents (used below)
        total_dollars = 0, total_change = 0;

    //write the prompt
    cout << "How many pennies do you have: ";
    cin >> pennies;

    cout << "How many nickels do you have: ";
    cin >> nickels;

    cout << "How many dimes do you have: ";
    cin >> dimes;

    cout << "How many quarters do you have: ";
    cin >> quarters;

    cout << "How many half-dollars do you have: ";
    cin >> half_dollars;

    cout << "How many dollars do you have: ";
    cin >> dollars;

    //print output
    if(pennies > 1)
    {
        cout << "You have " << pennies << " pennies.\n";
    }
    else if(pennies < 1)
    {
        pennies = 0;
        cout << "You have " << pennies << " pennies.\n";
    }
    else
    {
        cout << "You have " << pennies << "penny\n";
    }

    if(nickels > 1)
    {
        cout << "You have " << nickels << " nickles.\n";
    }
    else if(nickels < 1)
    {
        nickels = 0;
        cout << "You have " << nickels << " nickels.\n";
    }
    else
    {
        cout << "You have " << nickels << "nickel\n";
    }

    if(dimes > 1)
    {
        cout << "You have " << dimes << " dimes.\n";
    }
    else if(dimes < 1)
    {
        dimes = 0;
        cout << "You have " << dimes << " dimes.\n";
    }
    else
    {
        cout << "You have " << dimes << "dime\n";
    }

    if(quarters > 1)
    {
        cout << "You have " << quarters << " quarters.\n";
    }
    else if(quarters < 1)
    {
        quarters = 0;
        cout << "You have " << quarters << " quarters.\n";
    }
    else
    {
        cout << "You have " << quarters << " quarter.\n";
    }

    if(half_dollars > 1)
    {
        cout << "You have " << half_dollars << " half-dollars.\n";
    }
    else if(half_dollars < 1)
    {
        half_dollars = 0;
        cout << "You have " << half_dollars << " half-dollars.\n";
    }
    else
    {
        cout << "You have " << half_dollars << " half-dollar.\n";
    }

    if(dollars > 1)
    {
        cout << "You have " << dollars << " dollars.\n";
    }
    else if(dollars < 1)
    {
        dollars = 0;
        cout << "You have " << dollars << " dollars.\n";
    }
    else
    {
        cout << "You have " << dollars << " dollar.\n";
    }

    //convert here
    //sum everything to pennies
    nickels_to_pennies = nickels * 5;
    dimes_to_pennies = dimes * 10;
    quarters_to_pennies = quarters * 25;
    half_to_pennies = half_dollars * 50;
    dollar_to_pennies = dollars * 100;

    total_pennies = nickels_to_pennies + dimes_to_pennies
        + quarters_to_pennies + half_to_pennies + dollar_to_pennies;

    //convert to dollars and cents

    total_dollars = total_pennies/100;
    total_change = total_pennies%100;

    //print totals and converts
    cout << "Overall you have " << total_pennies << " cent.\n";


    //print dollars and change
    cout << "$" << total_dollars << "." << total_change << "\n";
}
