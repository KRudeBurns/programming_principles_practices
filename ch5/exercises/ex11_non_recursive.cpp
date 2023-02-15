#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}
/*
Write a program that writes out the first so many values of the Fibonacci series, 
that is, the series that starts with 1 1 2 3
5 8 13 21 34. The next number of the series is the sum of the two previous ones. 
Find the largest Fibonacci number that fits in an int.
*/

/*
The recursive version is a bit complicated
because the same task of getting the fibbonaci number using recursion
appears to be slow.

There needs to be another way to do it without recursion. So I will try that.
*/

int fib(int n)
{
    /*
    In mathematics, the Fibonacci numbers, commonly denoted Fn, form a sequence, 
    called the Fibonacci sequence, such that each number is the sum of the two 
    preceding ones, starting from 0 and 1. 

    That is 
    F(0) = 0   i.e. F at the zero-index post is 0
    F(1) = 1   i.e. F at the 1st-index post is 0
    and then for n > 1 (i.e. for any index post greater than 1)
    F(n) = F(n-1) + F(n-2)
    i.e. F(n) the fibonacci value at index post n is 
    the sum of the fibonacci value at index posts n-1 and n-2. Or 
    the sum of the previous two fibonacci values

    So to show this
    */
    int nth_value_2 = 0; // the initial n - 2 post
    int nth_value_1 = 1; // the initial n-1 post;
    int nth_value;       // F(n) for n > 1

    //cout << "\nn = " << n << endl;

     if (n == 0)
    {
        nth_value = n;
        return nth_value_2;
    }

    if (n == 1)
    {
        nth_value = n;
        return nth_value_1;
    } 

    for (int i = 2; i < n; ++i)
    {
        nth_value = nth_value_2 + nth_value_1;

        //nth value now becomes nth_value_1;
        nth_value_2 = nth_value_1;
        nth_value_1 = nth_value;

        cout << "nth val = " << nth_value << endl;
        cout << "nth_val_1 = " << nth_value_1 << endl;
        cout << "nth_val_2 = " << nth_value_2 << endl;

        
    }
    return nth_value;
}

int main()
{
    vector<unsigned int> fib_seq;
    int size;
    cout << "What size of the series do you want to see? ";
    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        if (fib(i) < 0)
            break;
        fib_seq.push_back(fib(i));
    }

    //print array
    for (int x : fib_seq)
    {
        cout << x << " ";
    }
}