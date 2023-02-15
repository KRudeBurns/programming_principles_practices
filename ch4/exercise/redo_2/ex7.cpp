/*
7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers 
written as either digits or spelled out.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "--------------------------------------------\n";
    cout << "This program is a simple calculator";
    cout << "\n--------------------------------------------\n";

    string num1, num2;
    int val1, val2;
    char op, onward;
    bool go_on = true, valid_entries = true;
    //hold strings
    vector<string> num_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> num_strings2 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    while (go_on)
    {
        cout << "Enter three entries: num, op, num: ";
        cin >> num1 >> op >> num2;

        //val1
        auto ret_1a = find(num_strings.begin(), num_strings.end(), num1);
        auto ret_1b = find(num_strings2.begin(), num_strings2.end(), num1);
        if (ret_1a != num_strings.end())
        {
            val1 = ret_1a - num_strings.begin();
            cout << "You entered " << num1 << " | CONVERTED TO | " << val1 << endl;
        }
        else if (ret_1b != num_strings2.end())
        {
            val1 = ret_1b - num_strings2.begin();
        }
        else
        {
            cout << "Value 1 not valid!" << endl;
            valid_entries = false;
        }

        //val2
        auto ret_2a = find(num_strings.begin(), num_strings.end(), num2);
        auto ret_2b = find(num_strings2.begin(), num_strings2.end(), num2);
        if (ret_2a != num_strings.end())
        {
            val2 = ret_2a - num_strings.begin();
        }
        else if (ret_2b != num_strings2.end())
        {
            val2 = ret_2b - num_strings2.begin();
        }
        else
        {
            cout << "Value 2 not valid!" << endl;
            valid_entries = false;
        }

        //do operations
        if (valid_entries)
        {
            switch (op)
            {
            case '+':
                cout << "result =" << val1 + val2;
                break;
            case '-':
                cout << "result =" << val1 - val2;
                break;

            case '*':
                cout << "result =" << val1 * val2;
                break;

            case '/':
                cout << "result =" << val1 / val2;
                break;

            default:
                cout << "invalid op entry";
                break;
            }
        }

        //continue or quit
        cout << "\nuse Y  to continue: ";
        cin >> onward;
        if (onward != 'y' || onward != 'Y')
            go_on = false;
    }
}