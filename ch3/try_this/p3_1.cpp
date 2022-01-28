//read name and age 2nd version
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open();

int main()
{
    
    string first_name = "???";

    int age = -1;

    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (" << age 
         << ")\n";
    keep_window_open();
}

inline void keep_window_open()
{
    char ch;
    cin >> ch;
}