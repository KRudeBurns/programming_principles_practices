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

int fib(int n)
{
    unsigned int result;
    if (n == 0 || n == 1)
    {
        return n;
    }
    result = fib(n - 1) + fib(n - 2);
    return result;
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