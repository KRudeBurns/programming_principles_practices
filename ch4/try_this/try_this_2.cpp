#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <windows.h>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

/*
Rewrite your currency converter program from the previous Try this to use a switch-statement. 
Add conversions from yuan and kroner. 

Which version of the program is easier to write, understand, and modify? Why?
*/

int main()
{
    //conversion constants
    constexpr double yen_to_dollar = .0094;
    constexpr double euro_to_dollar = 1.2072;
    constexpr double pounds_to_dollar = 1.1824;
    constexpr double kroner_to_dollar = 0.16;
    constexpr double yuan_to_dollar = 0.15;

    //how much money do you have?
    double amount = 0.0;
    cout << "How much money do you have? ";
    cin >> amount;
    //what currency is your money
    char convert_from = ' ';
    cout << "What currency is your money in?\n"
         << "pick the right character for your currency \n"
         << "(d)ollar, (y)en, (e)uro, (p)ounds, (k)roner, y(u)an: ";
    cin >> convert_from;

    //what currency do you want back?
    char convert_to = ' ';
    cout << "What currency would you like back? "
         << "pick the right character for your currency \n"
         << "(d)ollar, (y)en, (e)uro, (p)ounds, (k)roner, y(u)an: ";

    cin >> convert_to;

    //convert to dollars
    double to_dollars = 0.0, from_dollars = 0.0;
    string currency = " ";

    if (convert_from == convert_to)
    {
        cout << "Stop it! You dont need a conversion! Mallam\n";
        return -1;
    }

    switch (convert_from)
    {
    case 'd':
        to_dollars = amount;
        currency = "dollar(s)";
        break;
    case 'e':
        to_dollars = amount * euro_to_dollar;
        currency = "euro(s)";
        break;
    case 'p':

        to_dollars = amount * pounds_to_dollar;
        currency = "pound(s)";
        break;
    case 'y':
        to_dollars = amount * yen_to_dollar;
        currency = "yen(s)";
        break;
    case 'k':
        to_dollars = amount * kroner_to_dollar;
        currency = "kroner(s)";
        break;
    case 'u':
        to_dollars = amount * yuan_to_dollar;
        currency = "yuan(s)";
        break;
    default:
        cout << "Error in entry!\n";
        break;
    } //end switch
    cout << "$" << to_dollars << endl;
    char new_currency = convert_to;

    switch (convert_to)
    {
    case 'd':
        cout << amount << " " << currency << " = " << to_dollars << " " << new_currency << endl;
        break;
    case 'y':
        from_dollars = to_dollars / yen_to_dollar;
        cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        break;
    case 'p':
        from_dollars = to_dollars / pounds_to_dollar;
        cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        break;
    case 'e':
        from_dollars = to_dollars / euro_to_dollar;
        cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        break;
    case 'u':
        from_dollars = to_dollars / yuan_to_dollar;
        cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        break;
    case 'k':
        from_dollars = to_dollars / kroner_to_dollar;
        cout << amount << " " << currency << " = $" << from_dollars << " " << new_currency << endl;
        break;
    default:
        cout << "error" << endl;
        break;
    } //end switch
}