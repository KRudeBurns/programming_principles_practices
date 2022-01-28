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

int main()
{
    vector<double> temps; //temperatures

    for (double temp; cin >> temp;)
        temps.push_back(temp);

    double sum = 0.0;
    double high_temp = 0.0;
    double low_temp = 0.0;

    for (double x : temps)
    {

        if (high_temp == 0 && low_temp == 0)
            high_temp = x, low_temp = x;

        if (x > high_temp)
            high_temp = x; //find high
        if (x < low_temp)
            low_temp = x; //find low

        sum += x; // compute sum
    }

    cout << "High temperature: " << high_temp << "\n";
    cout << "Low temperature: " << low_temp << "\n";
    cout << "Average temperature: " << sum / temps.size() << "\n";
}