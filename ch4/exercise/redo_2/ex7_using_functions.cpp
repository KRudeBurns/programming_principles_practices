/*
7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers 
written as either digits or spelled out.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//function to return string_to_vec_index
//vector is passed by reference
//a vector not passed by reference is just a copy made by the function and then discarded after use.
//format (vector 1, vector 2, entry)
int return_vec_index(const vector<string> &, const vector<string> &, string &);

//is entry valid
//returns true if the int is not -1 or invalid
bool check_if_entry_valid(int, int);

//operation
void operation(int &, int &, char &);

//keep going
bool keep_going(char &);

int main()
{
    cout << "--------------------------------------------\n";
    cout << "This program is a simple calculator";
    cout << "\n--------------------------------------------\n";

    //vector hold strings
    //constant to avoid changes
    const vector<string> NUM_STRING_SET_1 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const vector<string> NUM_STRING_SET_2 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    string entry_1, entry_2;
    int val1, val2;
    char op, input;
    bool go_on = true;

    while (go_on)
    {
        cout << "Enter three entries: num, op, num: ";
        cin >> entry_1 >> op >> entry_2;

        val1 = return_vec_index(NUM_STRING_SET_1, NUM_STRING_SET_2, entry_1);
        val2 = return_vec_index(NUM_STRING_SET_1, NUM_STRING_SET_2, entry_2);

        //do operations
        if (check_if_entry_valid(val1, val2))
        {
            operation(val1, val2, op);
        }

        //continue or quit
        go_on = keep_going(input);
    }
}

int return_vec_index(const vector<string> &vec_string_1, const vector<string> &vec_string_2, string &entry)
{
    int val;
    auto ret_from_vec_string_1 = find(vec_string_1.begin(), vec_string_1.end(), entry);
    auto ret_from_vec_string_2 = find(vec_string_2.begin(), vec_string_2.end(), entry);
    

    if (ret_from_vec_string_1 != vec_string_1.end())
    {
        val = (ret_from_vec_string_1 - vec_string_1.begin());
    }
    else if (ret_from_vec_string_2 != vec_string_2.end())
    {
        val = (ret_from_vec_string_2 - vec_string_2.begin());
    }
    else
    {
        return -1;
    }  
    return val;
}

bool check_if_entry_valid(int val1, int val2)
{
    if (val1 == -1 || val2 == -1)
    {
        cout << "\nAn entry is invalid!\n";
        return false;
    }
    return true;
}

void operation(int &val1, int &val2, char &op)
{
    switch (op)
    {
    case '+':
        cout << "result = " << val1 + val2;
        break;
    case '-':
        cout << "result = " << val1 - val2;
        break;

    case '*':
        cout << "result = " << val1 * val2;
        break;

    case '/':
        cout << "result = " << val1 / val2;
        break;

    default:
        cout << "invalid op entry";
        break;
    }
}

bool keep_going(char &in)
{
    cout << "\nEnter y or Y to continue: ";
    cin >> in;

    if (tolower(in) != 'y')
        return false;

    return true;
}