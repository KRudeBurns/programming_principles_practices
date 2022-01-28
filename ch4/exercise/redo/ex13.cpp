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

int main()
{
    //step 1: establish a vector of a given length
    cout << "I will give you the prime numbers from 1 to your given max.\n";
    vector<int> numbers;
    int max;
    cout << "What is your max: ";
    cin >> max;

    //populate vector to max
    int i;
    for (i = 1; i <= max; ++i)
    {
        numbers.push_back(i);
    }

    cout << "\nThe prime numbers from " << numbers[0] << " to " << numbers[numbers.size() - 1] << " are:\n";

    for (auto v = numbers.begin(); v != numbers.end(); ++v)
    {        
        if (*v <= 1)
        {
            
            numbers.erase(v), --v;
        }
        else
        {
            for (auto w = numbers.begin() + *v; w < numbers.end(); ++w)
            {                
                if (*w % *v == 0)
                {
                    numbers.erase(w), --w;
                }
            }
        }
    }

    for (auto i = numbers.begin(); i != numbers.end(); ++i)
    {
        cout << *i << " ";
    }
}