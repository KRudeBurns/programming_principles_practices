/*
15. Write a program that takes an input value n and then finds the first n primes.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

void find_prime(vector<int32_t> &p, int32_t &num)
{
    bool is_prime;
    int i = 1;
    while (p.size() < num)
    {
        if (i < 2)
        {
            is_prime = false;
        }
        else if (i == 2)
        {
            is_prime = true;
        }
        else
        {
            for (int32_t x : p)
            {
                if (i % x == 0)
                {
                    is_prime = false;
                    break;
                }
                is_prime = true;
            }
        }

        if (is_prime)
        {
            p.push_back(i);
        }

        ++i;
    }
}

void print_primes(vector<int32_t> &p)
{
    int len_of_line = 0;

    for (int32_t x : p)
    {
        cout << setw(2) << x << setw(2) << " ";
        ++len_of_line;
        if (len_of_line == 10)
        {
            cout << "\n";
            len_of_line = 0;
        }
    }
}

int main()
{
    //vector to save primes
    vector<int32_t> primes;
    bool is_prime;
    int32_t n;
    cout << "Enter a number, n, and I will find the first n prime numbers: ";
    cin >> n;

    cout << "The first n prime numbers are: \n";
    find_prime(primes, n);
    print_primes(primes);
}