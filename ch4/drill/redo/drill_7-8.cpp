#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

/*
7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm,
m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit indicator into a string.
You may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space).

8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.
*/
int main()
{

    double largest = 0, smallest = 0, entry;
    string unit;
    vector<string> the_units = {"cm", "m", "in", "ft"};

    cout << "Enter the number and unit you want to see ('|' to quit): ";

    while (cin >> entry >> unit && entry != 0 && unit != " ")
    {
        //this section tests the unit and program ends if no match found.
        bool test = false;
        for (int i = 0; i < the_units.size(); ++i)
        {
            if (unit != the_units[i])
            {
                test = false;
            }
            else
            {
                test = true;
                break;
            }
        }
        if (test == false)
        {
            return -1;
        }

        //this section sets up the conversions standard
        double converter = 0.0;
        if (unit == "m")
            converter = 1.00; //meter is the default
        if (unit == "cm")
            converter = 100.00; //1m = 100 cm.
        if (unit == "in")
            converter = 39.37; //1m = 39.37 inch
        if (unit == "ft")
            converter = 3.28; //1m = 3.28 feet

        //this section set ups conversion for any unit other than meters
        if (unit == "cm" || unit == "in" || unit == "ft")
        {
            cout << "you entered " << entry << " " << unit << endl;
             
            entry /= converter;
            unit = "m";

            cout << "It is now " << entry << " " << unit << endl;
        }
        

        if (largest == 0)
            largest = entry;
        if (smallest == 0)
            smallest = entry;

        //if entry > largest, assign entry to largest
        if (entry > largest)
            largest = entry;
        //if entry < smallest, assign entry to smallest
        if (entry < smallest)
            smallest = entry;

        cout << "Largest Number so far is " << largest << endl;
        cout << "Smallest Number so far is " << smallest << endl;

        cout << "Enter the two numbers for you ('|' to quit): \n";
    }
}