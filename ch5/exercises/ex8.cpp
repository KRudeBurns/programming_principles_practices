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




int main()
{
    int num_of_values;
    cout << "Please enter the number of values you want to sum: ";
    cin >> num_of_values;

    vector<int> vals;
    cout << "Pleae enter some integers. (Press | to stop)";

    int x;
    while (cin >> x)
    {
        vals.push_back(x);
    }

    
	//to clear cin buffer
	cin.clear(); cin.ignore();

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