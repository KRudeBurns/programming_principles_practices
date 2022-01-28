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
Use the example above as a model for a program that converts yen, euros, and pounds into dollars. If you like realism, you can find conversion rates on the web.

pg 88 pdf
*/

int main()
{
    //conversion constants
    constexpr double yen_to_dollar = .0094;
    constexpr double euro_to_dollar = 1.2072;
    constexpr double pounds_to_dollar = 1.1824;

    //how much money do you have?
    double amount = 0.0;
    cout << "How much money do you have? ";
    cin >> amount;
    //what currency is your money
    string convert_from = " ";
    cout << "What currency is your money in? ";
    cin >> convert_from;

    //what currency do you want back?
    string convert_to = " ";
    cout << "What currency would you like back? ";
    cin >> convert_to;

    //ignore case of entries
    transform(convert_from.begin(), convert_from.end(), convert_from.begin(), ::tolower);
    transform(convert_to.begin(), convert_to.end(), convert_to.begin(), ::tolower);

    //convert to dollars
    double to_dollars = 0.0, from_dollars = 0.0;
    string currency = " ";

    if (convert_from == convert_to)
    {
        cout << "Stop it! You dont need a conversion! Mallam\n";
        return -1;
    }
    else //turn it all to dollars
    {
        if (convert_from == "dollars" || convert_from == "dollars")
        {
            to_dollars = amount;
            currency = "dollar(s)";
        }
        else if (convert_from == "euros" || convert_from == "euro")
        {
            to_dollars = amount * euro_to_dollar;
            currency = "euro(s)";
        }
        else if (convert_from == "pounds" || convert_from == "pounds")
        {
            to_dollars = amount * pounds_to_dollar;
            currency = "pound(s)";
        }
        else if (convert_from == "yen" || convert_from == "yens")
        {
            to_dollars = amount * yen_to_dollar;
            currency = "yen(s)";
        }
        cout << "$" << to_dollars << endl;

        //now return the users currency
        string new_currency = convert_to;
        if (convert_to == "dollars" || convert_to == "dollar")
        {
            cout << to_dollars << " " << currency << " = " << to_dollars << " " << new_currency << endl;
        }
        else if (convert_to == "yen" || convert_to == "yens")
        {
            from_dollars = to_dollars / yen_to_dollar;
            cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        }
        else if (convert_to == "pounds" || convert_to == "pound")
        {
            from_dollars = to_dollars / pounds_to_dollar;
            cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        }
        else if (convert_to == "euros" || convert_to == "euro")
        {
            from_dollars = to_dollars / euro_to_dollar;
            cout << amount << " " << currency << " = " << from_dollars << " " << new_currency << endl;
        }
    }
}