#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
7. Modify the “mini calculator” from exercise 5 to accept (just)
  single-digit numbers written as either digits or spelled out.
*/

int string_to_nums(string, vector<int>);
int calculate_ops(char, int, int);


int main() {
    //declare numbers
    vector<int> nums = { 0, 1, 2, 3, 4,
                         5, 6, 7, 8, 9
                       };
    string string_num1 = " ", string_num2 = " ";
    int in1 = 0, in2 = 0;
    char ops = ' ';

    cout << "Enter two single digits and an operation(+, -, *, /, ^)\n"
         << "Example: '3  5 +' or 'three five +' will be 3+5 = 8\n";         
         

    while (cin >> string_num1 >> string_num2 >> ops){
    in1 = string_to_nums(string_num1, nums);
    in2 = string_to_nums(string_num2, nums);
    
    cout << in1 << ops << in2 << " = "
         << calculate_ops(ops, in1, in2) << '\n';

    cout << "Enter two single digits and an operation(+, -, *, /, ^)\n"
         << "Example: '3  15 +' or 'three five +' will be 3+15 = 18\n"
         << "use | to stop:  ";    
    }
}

//this function takes the string and convert it to a num
int string_to_nums(string s, vector<int> x)
{
    int output = 0;
    if(s == "zero" || s == "0")
    {
        output = x[0];
    }
    else if(s == "one" || s == "1")
    {
        output = x[1];
    }
    else if(s == "two" || s == "2")
    {
        output = x[2];
    }
    else if(s == "three" || s == "3")
    {
        output = x[3];
    }
    else if(s == "four" || s == "4")
    {
        output = x[4];
    }
    else if(s == "five" || s == "5")
    {
        output = x[5];
    }
    else if(s == "six" || s == "6")
    {
        output = x[6];
    }
    else if(s == "seven" || s == "7")
    {
        output = x[7];
    }
    else if(s == "eight" || s == "8")
    {
        output = x[8];
    }
    else if(s == "nine" || s == "9")
    {
        output = x[9];
    }
    else
    {
        cout <<"Ending program\n";
        throw "err";
    }    
    return output;
}

//this function takes an operation, and two integers for computation
int calculate_ops(char c, int a, int b)
{    
    if(c == '+')
    {
        return a + b;
    }
    else if (c == '-')
    {
        return a - b;
    }
    else if (c == '*')
    {
        return a * b;
    }
    else if (c == '/')
    {
        return a / b;
    }
    else if (c == '^')
    {
        return pow(a,b);
    }
    else
    {
        cout <<"Ending program\n";
        throw 'e';
    }     
}