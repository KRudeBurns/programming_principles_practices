
/*
4. Do exercise 3 again, but this time handle the error inside ctok().
*/

#include <iostream>
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
    if (c < -273.15)
    {
        cout << "An invalid temp was entered.\n";
        throw -1.0;
    }
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;    
    double k = ctok(c);
    cout << k << '\n';
}
