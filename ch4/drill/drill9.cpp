#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
9. Keep track of the sum of values entered (as well as the 
smallest and the largest) and the number of values entered.
When the loop ends, print the smallest, the largest, 
the number of values,  and the sum of values. 

Note that to keep the sum, you
have to decide on a unit to use for that sum; use meters.
*/
int main() {
    double a = 0.0, smallest = 0.0, largest = 0.0, converter = 0.0,
    sum_of_vals = 0.0, num_of_values = 0.0;
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
        else{
            cout << "Invalid or no unit detected\n";
            throw "wrong";
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

        //summations
        num_of_values += 1;
        sum_of_vals += a;

        cout << "Largest = " << largest << " " << unit << "\n"
             << "Smallest = " << smallest << " " << unit << "\n"
             << "Number of Values Entered = " << num_of_values << "\n"
             << "Sum of Values = " << sum_of_vals << " " << unit << "\n\n";
        
        cout << "Enter a numbers: ";
    }
}