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
15. Write a program that takes an input value n and then finds the first n primes.
*/

bool is_it_prime(int, vector<int>);
bool is_it_two_or_less(int);

int main()
{

    vector<int> primes;
    int num_of_primes = 0, max_size = 0;
    cout << "Enter a max size of your series: ";
    cin >> max_size;
    cout << "Enter a number (n) to get the first n primes: ";
    cin >> num_of_primes;

    if (num_of_primes > max_size/2)
    {
        cout << "You can only get max_size/2 primes, where max_size is the size of your series\n";
        return -1;
    }


    for (int i = 0, x = 0; i <= max_size; ++i)
    {
        if (i < 3)
        {
            if (is_it_two_or_less(i))
                primes.insert(primes.begin(), i), ++x;
        }
        else
        {
            if (is_it_prime(i, primes))
                primes.push_back(i), ++x;
        }

        if (x == num_of_primes)
            break;
    }

    if(num_of_primes > primes.size())
    {
        cout << "I did not find up to " << num_of_primes << " prime numbers.\n"
             << "I will print out the " << primes.size() << " primes I got \n";
    }
    else
    {
        cout << "The first " << num_of_primes << " are: \n";
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


/*
This method works by 
a. Getting the limit the user wants. Example the limit is 100. (max_size)
b. Getting the number of primes the user wants to get from his series. Eg. 10.

if the number of primes the user is requesting that the program print is more than 1/2 of his limit, the program will return an error. If x is your series size, you cannot have more than x/2 primes in that series. Eg: x = 4, num_of_primes !> 2.

The loop will generate the prime numbers and push it to the vector of primes.

If the counter == number_of_primes the loop will terminate and the primes will be printed.

if the number_of_primes requested is > than the actual number of primes found, 
the user will be informed of this discrepancy, and the actual found primes will be 
printed.

Otherwise, the list of primes will be printed up to number_of_primes requested.


*/