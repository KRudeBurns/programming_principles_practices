#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
  Change the program so that it writes out the numbers are 
  almost equal after writing out which is the larger and 
  the smaller if the two numbers differ by less than 1.0/100.
*/
int main() {

    double num1 = 0, num2 = 0;
    cout << "Enter the numbers you want to see ('|' to quit): ";
    

    while(cin >> num1 >> num2)    
    {        
        if (num1 == num2)
        {
            cout << "Both numbers are equal" << endl;
        }
        else if (abs(num1 - num2) < 1.0/100)
        {
            /*
            num1-num2 < abs(1.0/100)
            fails. For instance if i compare 150 and 151, 
            it tells me both are almost equal. makes no sense.
            i switched to abs(num1 - num2) that works. and as i wrote this 
            i figured out, if num1  - num2 is negative, and is compared to 
            a positive, then obviously i will be off.
            */
            cout << abs(num1 - num2) << endl;
            cout << "Both numbers are almost equal" << endl;
        }
        else if (num1 > num2)
        {
            cout << "The smaller value is: " << num1 << endl;
            cout << "The larger value is: " << num2 << endl;
        }
        else
        {
            cout << "The smaller value is: " << num2 << endl;
            cout << "The larger value is: " << num1 << endl;
        }

        cout << "Enter the two numbers for you ('|' to quit): \n";
    }

    
}