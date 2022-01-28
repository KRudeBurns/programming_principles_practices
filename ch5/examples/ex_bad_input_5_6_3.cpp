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

void error(string s)
{
    throw runtime_error(s);
}

int main()
{
    double d = 0;
    cin >> d;
    if (!cin)
    {
        error("could not read a double in some function");
    }
}