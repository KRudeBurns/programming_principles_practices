#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;

void error(string s)
{
    throw runtime_error(s);
}
/*

9. Modify the program from exercise 8 to write out an error if the result cannot be represented as an int.


*/
int main()
{
    int num_of_values;
    cout << "Please enter the number of values you want to sum: ";
    cin >> num_of_values;
    if (!cin)
    {
        cin.clear();
        error("Invalid input you will not have good result");
    }

    vector<int> vals;
    cout << "Pleae enter some integers. (Press | to stop)";

    int x;
    while (cin >> x)
    {
        vals.push_back(x);
    }

    //to clear cin buffer
    //and take ending character
    char eof = ' ';
    if (!cin)
    {
        cin.clear();
        cin >> eof;
        if (eof != '|')
            error("Invalid input for integers! The result can't be expressed as an int");
    }

    if (num_of_values > vals.size())
    {
        cerr << "invalid request. the vector is not that large!\n";
        return -1;
    }

    int sum = 0;

    cout << "Here is your entire data: \n";
    for (int x : vals)
    {
        cout << x << " ";
    }

    cout << "\nHere is your desired data to sum up: \n";
    for (int i = 0; i < num_of_values; ++i)
    {
        cout << vals[i] << " ";
        sum += vals[i];
    }

    cout << "\nThe sum of your " << num_of_values << " values are : " << sum << "\n";
}