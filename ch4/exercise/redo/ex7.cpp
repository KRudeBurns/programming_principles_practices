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

int get_number(string);
/*
Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled out.

*/
int main()
{
    int op1, op2;    
    string num1, num2;
    char ops;
    cout << "Enter two numbers and one of following operations: +, *, -, or / : ";
    

    while (cin >> num1 >> num2 >> ops)
    {
        op1 = get_number(num1);
        op2 = get_number(num2);

        if (ops == '+')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 + op2;
        }
        else if (ops == '-')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 - op2;
        }
        else if (ops == '*')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 * op2;
        }
        else if (ops == '/')
        {
            cout << op1 << " " << ops << " " << op2 << " = "
                 << op1 / op2;
        }
        else
        {
            cout << "invalid operation requested. Now terminating!\n";
            return -1;
        }

        cout << "\nEnter two numbers and one of following operations: +, *, -, or /  "
             << "[use | to quit]: ";
    }
}

int get_number(string x)
{
    //vector for spelled out nums
    vector<string> nums_spelled = {"one", "two", "three", "four", "five", "six",
                                   "seven", "eight", "nine"};
    vector<string> ints_spelled = {"1", "2", "3", "4",
                                   "5", "6", "7", "8", "9"};
    vector<int> nums_int = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    bool valid_num = false;

    for (int i = 0; i < nums_spelled.size(); ++i)
    {
        if (x == nums_spelled[i])
        {
            num = nums_int[i];
            valid_num = true;
        }
        else if (x == ints_spelled[i])
        {            
            num = nums_int[i];
            valid_num = true;
        }
    }

    if (valid_num == true)
    {
        return num;
    }
    else
    {
        throw "invalid entry!";
    }
}