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
 Try to calculate the number of rice grains that the inventor asked for in exercise 8 above. You’ll find that the number is
so large that it won’t fit in an int or a double. Observe what happens when the number gets too large to represent exactly as an int and as a double. 

What is the largest number of squares for which you can calculate the exact number of
grains (using an int)? What is the largest number of squares for which you can calculate the approximate number of grains (using a double)?

i.e. for which the total number of grains collected is still positive

*/
int main()
{
    // number of squares, in our case default is 64
    int num_of_squares = 64;
    //counter
    int i = 1;
    long long num_of_grains = 1, grains_per_square = 1;

    //variables to track the prior grain count
    long long prior_num_of_grains = 0, prior_grains_per_square = 0;

    for (i; i <= num_of_squares; ++i)
    {
        if (i == 1)
        {
            num_of_grains = 1;
            grains_per_square = 1;
        }
        else
        {
            //track the old count before incrementing
            prior_num_of_grains = grains_per_square;
            prior_grains_per_square = num_of_grains;
            //increment count
            grains_per_square *= 2;
            num_of_grains += grains_per_square;
        }

        //if num of grains < 1, terminate the loop
        if (grains_per_square < 1 || num_of_grains < 1)
        {
            cout << "Terminating loop at square " << i << " because we have weird notation\n";
            break;
        }
    }

    cout << "Last accurate count was at square number " << i - 1 << '\n';

    cout << "Grains allocated square " << i - 1 << " = " << prior_grains_per_square << " grains\n";
    cout << "Total grains collected thus far = " << prior_num_of_grains << " grains\n";
}

/*
using int
Terminating loop at square 32 because we have weird notation
Last accurate count was at square number 31
Grains allocated square 31 = 2147483647 grains
Total grains collected thus far = 1073741824 grains

using unsigned int
Terminating loop at square 33 because we have weird notation
Last accurate count was at square number 32
Grains allocated square 32 = 4294967295 grains
Total grains collected thus far = 2147483648 grains

long
Terminating loop at square 32 because we have weird notation
Last accurate count was at square number 31
Grains allocated square 31 = 2147483647 grains
Total grains collected thus far = 1073741824 grains

using double
Grains allocated square 20 = 524287 grains
Total grains collected thus far = 262144 grains

long long 
Grains allocated square 64 = 9223372036854775807 grains
Total grains collected thus far = 4611686018427387904 grains
at square 65 we have error!

*/