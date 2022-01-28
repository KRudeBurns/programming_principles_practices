#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
7. Add a unit to each double entered; that is, enter values such as 10cm, 
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in.
Read the unit indicator into a string.

You may consider 12 m (with a space between the number and the unit)
equivalent to 12m (without a space).
*/
int main() {
    double a = 0.0, smallest = 0.0, largest = 0.0, converter = 0.0;
    string unit = " ";
    cout << "Enter a number a its unit (cm, m, in, ft): ";
    while (cin >> a >> unit)
    {  
        cout << "You entered " << a << " "<< unit << '\n';
        //set up conversion all units will be in meters
        if(unit == "cm"){
            converter = 0.01;
            unit = "m";
        }
        else if (unit == "m"){
            converter = 1;
            unit = "m";
        }
        else if (unit == "in"){
            converter = 0.0254;
            unit = "m";
        }
        else if (unit == "ft") {
            converter = 0.3048;
            unit = "m";
        }        
        //convert entry
        a *= converter;
        cout << "Your entry converted to meters -> " << a << " " << unit << "\n";

        //check if largest == null and if smallest == 0
        if (largest == 0)
        {
            largest = a;
        }
        if (smallest == 0)
        {
            smallest = a;
        }

        //resolve sizes
        if (a > largest)
        {
            largest = a;
        }
        if (a < smallest)
        {
            smallest = a;
        }

        cout << "Largest = " << largest << " " << unit << "\n"
             << "Smallest = " << smallest << " " << unit << "\n\n";
        
        cout << "Enter a numbers: ";
    }
}