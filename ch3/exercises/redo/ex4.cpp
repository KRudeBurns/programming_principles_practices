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
4 Write a program that prompts the user to enter two integer values. 
Store these values in int variables named val1 and val2.
Write your program to determine the smaller, larger, sum, difference,
product, and ratio of these values and report them to the user.
*/
int main()
{

    int val1 = 0, val2 = 0;
    int larger, smaller,
        sum = 0,
        diff = 0,
        prod = 0;

    cout << "enter two values: ";
    while (cin >> val1 >> val2)
    {
        if (val1 == val2)  
            cout << "Both units are equal" << endl;            
        else
        {
            if (val1 > val2)
                larger = val1, smaller = val2;
            else
                larger = val2, smaller = val1;
            cout << "Larger unit = " << larger << " and smaller unit = " << smaller << endl;
            diff = larger - smaller;
        }
        sum = val1 + val2,        
        prod = val1 * val2;
        cout << "sum is " << sum << endl;
        cout << "difference is " << diff << endl;
        cout << "product is " << prod << endl;
    }
}