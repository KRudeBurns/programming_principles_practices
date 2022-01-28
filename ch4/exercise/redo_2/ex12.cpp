/*
12. Modify the program described in the previous exercise to take an input value max and then find all prime numbers from
1 to max.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

void find_prime(vector<int32_t> &p, int32_t &m)
{
    bool is_prime;
    for(int32_t i = 1; i < m; ++i)
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
    }    
}

void print_primes(vector<int32_t> &p)
{
    int len_of_line = 0;

    for (int32_t x : p)
    {
        cout <<setw(2) << x << setw(2) << " ";
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
    int32_t max;
    cout << "Enter a max value and I will find all primes from 1 to that number: ";
    cin >> max;

    cout << "The list of primes from 1 to " <<  max << " are: \n";
    find_prime(primes, max);
    print_primes(primes);   
}