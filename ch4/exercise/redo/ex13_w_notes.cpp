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
        // if(*v == 1 ) also works. but you can test this with a negative value
        //in your vector. eg. push back negative values instead of just i.
        if (*v <= 1)
        {
            
            numbers.erase(v), --v;
        }
        else
        {
            for (auto w = numbers.begin() + *v; w < numbers.end(); ++w)
            {
                cout << "w = " << *w << "  ";
                cout << "v = " << *v << "  ";
                cout << "vector size = " << numbers.size() << endl;
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

/*
The way the sieve of erastothenes works.
The best explanation that worked for me was from this youtube video
https://www.youtube.com/watch?v=V08g_lkKj6Q

First of all the definition of a prime number is any number that has 1 and itself as the only factors.

The sieve of erastothenes is an elimination sieve. It deletes debris - numbers that are not prime. 
The sieve must start with a fully populated sample. (lines 17 - 27)

1 is not a prime number. If x = 1 erase it from the vector. I could also do if(x <= 1 ) that will work if the vector has negative numbers. Tested this and it worked. 

The program also assumes we start with 2 as the first prime number. In the future I will revisit using the sieve starting from any given number.

The sieve really starts with that first prime number. Once you get the first prime number, you delete any numbers from the sample that is a factor of the prime number. So in this case, w = numbers.begin() + *v. This works.

The wikipedia version of the algorithm is a bit hard to get my head around, thus I used the youtube explanation.

Once I have finished emptying the debris - non-primes, I print out the content of the sieve which will be only primes.
*/