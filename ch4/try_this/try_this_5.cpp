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

int square(int x)
{
    int i = 0, count = 0;
    while (count < x)
    {
        i += x;
        ++count;
    }

    return i;
}

void print_square(int v)
{
    cout << v << "\t"
         << square(v)
         << "\n";
}

int main()
{

    for (int i = 1; i < 101; ++i)
        print_square(i);
}