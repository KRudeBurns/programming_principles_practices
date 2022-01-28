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
/*
11. Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function that will
check if a number is prime (i.e., see if the number can be divided by a prime number smaller than itself) using a vector
of primes in order (so that if the vector is called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then
write a loop that goes from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a vector.
Write another loop that lists the primes you found. You might check your result by comparing your vector of prime numbers with primes. Consider 2 the first prime.
*/

bool is_it_prime(int, vector<int>);
bool is_it_two_or_less(int);

int main()
{

    vector<int> primes;
    int max_size = 0;
    cout << "Enter a number to get the primes from zero to that number: ";
    cin >> max_size;

    for (int i = 0; i <= max_size; ++i)
    {       
        if (i < 3)
        {
            if (is_it_two_or_less(i))
                primes.insert(primes.begin(), i);
        }
        else
        {
            if (is_it_prime(i, primes))
                primes.push_back(i);
        }
    }

    for (auto i = primes.begin(); i != primes.end(); ++i)
    {
        cout << *i << " ";
    }
}

bool is_it_two_or_less(int x)
{
    if (x == 2)
        return true;
    else if (x < 2)
        return false;
}

bool is_it_prime(int x, vector<int> p)
{
    for (int i = 0; i < p.size(); ++i)
        if (x % p[i] == 0)
            return false;

    return true;
}
