/*
There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name
his reward. The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on,
doubling for each of the 64 squares. That may sound modest, but there wasn’t that much rice in the empire! Write a
program to calculate how many squares are required to give the inventor at least 1000 grains of rice, at least 1,000,000
grains, and at least 1,000,000,000 grains. You’ll need a loop, of course, and probably an int to keep track of which
square you are at, an int to keep the number of grains on the current square, and an int to keep track of the grains on all
previous squares. We suggest that you write out the value of all your variables for each iteration of the loop so that you
can see what’s going on.
*/

#include <iostream>
#include <vector>
using namespace std;

void increment_grains(vector<uint32_t> &g_store, uint32_t &demand)
{
    //force the vector to clear and reset.
    //I am doing this because I am using reference for the function.
    //Otherwise, I will just keep adding to the same vector and getting the wrong size
    if (!g_store.empty())
    {
        g_store.clear();
    }

    int i = 0; //index
    uint32_t sum = 0;    
    

    while (sum <= demand)
    {
        if (i == 0) //initial condition
        {
            int32_t initial_grain = 1;
            g_store.push_back(initial_grain);
        }
        else
        {
            g_store.push_back(2 * g_store[i - 1]);
        }

        sum += g_store[i];
        ++i;
    }

    cout << "------------------------------------------------------------------\n"
         << "Number of grains demanded \t\t" << demand << "\n"
         << "Total number of grains collected \t " << sum << "\n"
         << "Total number of squares used \t\t " << i << "\n"
         << "------------------------------------------------------------------\n";

    
}

int main()
{
    vector<uint32_t> grains_vec;
    uint32_t grains_demanded; //number of grains I need to stop adding to the vector //halting point

    increment_grains(grains_vec, grains_demanded = 1000);
    increment_grains(grains_vec, grains_demanded = 1000000);
    increment_grains(grains_vec, grains_demanded = 1000000000);
}

