#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
6. Now change the body of the loop so that it reads just 
one double each time around. Define two variables to keep track
of which is the smallest and which is the largest value you have
seen so far. Each time through the loop write out the value entered.
If it’s the smallest so far, write the smallest so far after the number.
If it is the largest so far, write the largest so far after the number.
*/
int main() {
    double a = 0.0, smallest = 0.0, largest = 0.0;
    cout << "Enter a number: ";
    while (cin >> a)
    {  
        cout << "You entered " << a << '\n';
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

        cout << "Largest = " << largest << "\n"
             << "Smallest = " << smallest << "\n";
        
        cout << "Enter a numbers: ";
    }
}