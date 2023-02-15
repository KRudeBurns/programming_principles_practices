#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
6. Make a vector holding the ten string values "zero", "one", . . . "nine".
Use that in a program that converts a digit to its corresponding 
spelled-out value; e.g., the input 7 gives the output seven.

Have the same program, using the same input loop, 
convert spelled-out numbers into their digit form; e.g., the input
seven gives the output 7.
*/

int main() {
    //make vector holding strings
    vector<string> nums_string = {
                                 "zero", "one", "two", "three",
                                  "four", "five", "six", "seven",
                                  "eight", "nine"
                                 };

    //convert strings to nums
    int nums = 0;
    cout << "Enter a number, and I will spell it out: ";
    while(cin >> nums){
        if (nums == 0)
           cout << nums_string[0] << '\n';
        else if (nums == 1)
           cout << nums_string[1] << '\n';
        else if (nums == 2)
           cout << nums_string[2] << '\n';
        else if (nums == 3)
           cout << nums_string[3] << '\n';
        else if (nums == 4)
           cout << nums_string[4] << '\n';
        else if (nums == 5)
           cout << nums_string[5] << '\n';
        else if (nums == 6)
           cout << nums_string[6] << '\n';
        else if (nums == 7)
           cout << nums_string[7] << '\n';
        else if (nums == 8)
           cout << nums_string[8] << '\n';
        else if (nums == 9)
           cout << nums_string[9] << '\n';
        else{
            cout << "\nEnding program....\n";
            break;
        }
    }                     
}