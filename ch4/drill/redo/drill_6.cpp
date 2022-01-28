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
Now change the body of the loop so that it reads just one double each time around. Define two variables to keep track of which is the smallest and which is the largest value you have seen so far. 

Each time through the loop write out the value entered. If it’s the smallest so far, write the smallest so far after the number. If it is the largest so far, write the
largest so far after the number.
*/
int main()
{

    double largest = 0, smallest = 0, entry;
    
    cout << "Enter the number you want to see ('|' to quit): ";

    while (cin >> entry && entry != 0)
    {
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