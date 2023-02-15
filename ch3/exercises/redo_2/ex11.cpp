/*
11 Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-
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
Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1
dime (not 1 dimes). Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "-----------------------------------------------------------\n";
    cout << "This program will print out how much you have\n";
    cout << "-----------------------------------------------------------\n";
    
    int pennies, nickels, dimes, quarters, half_dollars;
    double sum = 0;
    cout << "How many pennies you got? ";
    cin >> pennies;
    string p_s = pennies > 1 ? " pennies" : " penny";
    sum += pennies;
    cout << "How many nickels you got? ";
    cin >> nickels;
    string n_s = nickels > 1 ? " nickels" : " nickel";
    sum += nickels*5;
    cout << "How many dime pieces you got? ";
    cin >> dimes;
    string d_s = dimes > 1 ? " dimes" : " dime";
    sum+=dimes*10;
    cout << "You a dime piece :)\n";
    cout << "How many quarters you got? ";
    cin >> quarters;
    string q_s = quarters > 1 ? " quarters" : " quarter";
    sum += quarters*25;
    cout << "How many half-dollars you got? ";
    cin >> half_dollars;
    string h_s = half_dollars > 1 ? " half-dollar" : " half-dollars ";
    sum += half_dollars*50;

    cout << "You have: \n"
         << pennies << p_s << endl 
         << nickels << n_s << endl 
         << dimes << d_s << endl 
         << quarters << q_s << endl 
         << half_dollars << h_s << endl;
    
    sum /= 100;

    cout << "you have a total: $" << sum;
}