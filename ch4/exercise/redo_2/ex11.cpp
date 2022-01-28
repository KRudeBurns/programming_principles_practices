/*
11. Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function that will
check if a number is prime (i.e., see if the number can be divided by a prime number smaller than itself) using a vector
of primes in order (so that if the vector is called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then
write a loop that goes from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a vector.
Write another loop that lists the primes you found. You might check your result by comparing your vector of prime
numbers with primes. Consider 2 the first prime.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

void find_prime(vector<int32_t> &p)
{
    bool is_prime;
    for(int32_t i = 1; i < 100; ++i)
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
        cout <<setw(1) << x << setw(1) << " ";
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
    cout << "The list of primes from 1 to 100 are: \n";
    find_prime(primes);

    print_primes(primes);
}