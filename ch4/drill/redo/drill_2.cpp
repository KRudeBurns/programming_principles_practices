#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
Change the program to write out "the smaller value is: " 
followed by the smaller of the numbers and "the larger value is: " followed by the larger value.
*/
int main() {

    int num1 = 0, num2 = 0;
    cout << "Enter the numbers you want to see ('|' to quit): ";

    while(cin >> num1 >> num2)    
    {        
        if (num1 > num2)
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