/*
14. Modify the program described in the previous exercise to take an input value max and then find all prime numbers from
1 to max.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

void generate_nums(vector<int32_t> &p, int32_t &m)
{
    if (m < 1)
    {
        cout << "invalid max chosen\n";
        exit(1);
    }

    if (!p.empty())
    {
        p.clear();
    }

    for (int i = 0; i < m; ++i)
    {
        p.push_back(i + 1);
    }
}

void prime_sieve(vector<int32_t> &p)
{

    //to avoid any errors you have to exactly declare the data type the vector's iterator works with
    //otherwise your code will not compile
    //alternatively just use - auto. it is so much easier to use auto.
    vector<int32_t>::iterator i = p.begin();

    while (i != p.end())
    {
        //ensure 2 is the first prime
        if (*i < 2)
        {
            p.erase(i);
            i = p.begin();
        }

        for (vector<int32_t>::iterator j = p.begin() + *i; j < p.end(); ++j)
        {
            if (*j % *i == 0)
            {
                p.erase(j);
            }
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
    int32_t max;
    bool is_prime;

    //step 1
    //generate a list of numbers from 1 to max
    cout << "Enter a number, and I will find the prime numbers in the series: ";
    cin >> max;
    generate_nums(primes, max);    
    prime_sieve(primes);
    cout << "primes between 1 and " << max << ": \n";
    print_primes(primes);
}