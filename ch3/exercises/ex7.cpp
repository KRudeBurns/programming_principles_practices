#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
7 Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the
output should be Fitzgerald, Hemingway, Steinbeck.
*/


int main() {
    string val1= "0", val2= "0", val3 = "0";    
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