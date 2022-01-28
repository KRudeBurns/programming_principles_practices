#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
10. Keep all the values entered (converted into meters)
 in a vector. At the end, write out those values.
11. Before writing out the values from the vector, sort them
 (that’ll make them come out in increasing order).
*/
int main() {
    double a = 0.0, smallest = 0.0, largest = 0.0, converter = 0.0,
    sum_of_vals = 0.0, num_of_values = 0.0;
    string unit = " ";
    vector <double> entries = {};
    cout << "Enter a number a its unit (cm, m, in, ft): ";
    while (cin >> a >> unit)
    {  
        cout << "Entry " << a << " "<< unit << " = ";

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
            cout << "Invalid entry. Not recorded\n";
            a = 0.0;
            unit = "m";
            break;
        }       
        //convert entry
        a *= converter;
        cout << a << " " << unit << "\n";

        //store entries into the vectors
        entries.push_back(a);

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
        cout << "Enter a number and its unit (cm, m, in, ft) [enter | to stop]: ";
    }

   //print out values in vector
   cout << "\n\n";
   cout << "Your unsorted entries: ";
   for(int i = 0; i < entries.size(); ++i)
   {
        cout << entries[i] << unit << " ";
   }  
   cout << "\n";
   //sort and print out values in vector
   sort(entries.begin(), entries.end());
   cout << "Your sorted entries: ";
   for(int i = 0; i < entries.size(); ++i)
   {
        cout << entries[i] << unit << " ";
   }
   cout << "\n\n";

   cout << "Number of Values Entered = " << num_of_values << "\n"
        << "Sum of Values = " << sum_of_vals << " " << unit << "\n"
        << "\nLargest = " << largest << " " << unit << "\n"
        << "Smallest = " << smallest << " " << unit << "\n\n";    
}