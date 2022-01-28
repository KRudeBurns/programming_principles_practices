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
10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.

11. Before writing out the values from the vector, sort them (that’ll make them come out in increasing order).


*/
int main()
{

    double largest = 0, smallest = 0, sum_of_vals = 0, entry;
    vector<double> vec_vals;
    int num_of_vals = 0;
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

        //this section counts the number & sum of valid entries
        ++num_of_vals;
        sum_of_vals += entry;

        //push vals to the vector
        vec_vals.push_back(entry);
        
        //sort values
        sort(vec_vals.begin(), vec_vals.end());

        //print vals in the vector
        int x = 0;
        cout << "Your sorted entries so far\n";
        for (x; x < vec_vals.size(); ++x){
            cout << vec_vals[x] << unit << " ";            
        }


        cout << "\nLargest value so far is " << largest << endl;
        cout << "Smallest value so far is " << smallest << unit << endl;
        cout << "The number of values enter is " << num_of_vals << endl;
        cout << "The sum of values entered is " << sum_of_vals << unit << endl;

        cout << "Enter the Value and unit ('|' to quit): \n";
    }
}