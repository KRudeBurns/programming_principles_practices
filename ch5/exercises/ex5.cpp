
/*
5. Add to the program so that it can also convert from Kelvin to Celsius.

*/

#include <iostream>
using namespace std;
double ktoc(double k)
{
    if (k < 0)
    {
        cout << "You entered an invalid kelvin temp\n";
        throw -1.0;
    }
    double c = k - 273.15;

    return c;
}

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

    double kelvin;
    cout << "Enter Kelvin temp: ";
    cin >> kelvin;
    double celcius = ktoc(kelvin);
    cout << celcius << "\n";
}
