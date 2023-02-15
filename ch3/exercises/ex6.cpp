#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
6 Write a program that prompts the user to enter three integer values,
and then outputs the values in numerical sequence separated by commas.
So, if the user enters the values 10 4 6, the output should be
4, 6, 10. If two values are the same, they should just be ordered 
together. So, the input 4 5 4 should give 4, 4, 5.
*/


int main() {
    int val1=0, val2=0, val3 = 0;    
    cout << "Enter three values\n\n";
    cin >> val1 >> val2 >> val3;    

    //sort
    if (val1 < val2 && val1 < val3)
       if (val2 < val3)
           cout << val1 << ", " << val2 << ", " << val3 << "\n\n";
       else
           cout << val1 << ", " << val3 << ", " << val2 << "\n\n";
    else if (val2 < val1 && val2 < val3)
        if (val1 < val3)
           cout << val2 << ", " << val1 << ", " << val3 << "\n\n";
       else
           cout << val2 << ", " << val3 << ", " << val1 << "\n\n";
    else // val3 is greatest
        if (val1 < val2)
           cout << val3 << ", " << val1 << ", " << val2 << "\n\n";
       else
           cout << val3 << ", " << val2 << ", " << val1 << "\n\n";
}