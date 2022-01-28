/*
16. In the drill, you wrote a program that, given a series of numbers, found the max and min of that series. The number that
appears the most times in a sequence is called the mode. Create a program that finds the mode of a set of positive
integers.
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
#include <functional>
#include <ctime>
using std::cin;
using std::cout;
using std::mt19937; //mersenne twister engine which is a psuedo random number generator
using std::random_device;
using std::vector;



//function to fill a vector with random numbers to user's specs
//random num generator function
void random_num_generator(vector<uint32_t> &p)
{
    uint32_t high, low;

    uint32_t size;
    cout << "How many numbers would you like to generate: ";
    cin >> size;

    cout << "For repetition to occur better, "
         << "\nwe would like a range of a high and a low number"
         << "\nWhat is your low: ";
    cin >> low;
    cout << "What is your high: ";
    cin >> high;

    random_device rd; //this will be used to obtain a seed for the random number engine.

    mt19937 generator(rd());

    std::uniform_int_distribution<uint32_t> distribution(low, high);

    while (size > 0)
    {
        p.push_back(distribution(generator));
        --size;
    }
}

void user_choice(vector<uint32_t> &p)
{
    //i need to give you the option to create your own list of numbers

    char response;
    cout << "Do you want me to generate your numbers for you (y, n)?";
    cin >> response;
    if (response == 'y')
    {
        //call the random number generator function
        random_num_generator(p); //p is the vector
    }

    if (response == 'n')
    {
        //let the user enter his own values
        double x;
        cout << "You can fill the list with your numbers";
        cout << "enter x to exit";
        while (cin >> x)
        {
            p.push_back(x);
        }
    }
}

void print_vector_vals(vector<uint32_t> &p)
{
    for (int32_t x : p)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void print_mode(vector<uint32_t> &p)
{
    uint32_t y = p[0];
    int32_t max_count = 1, mode = 0;
    for (uint32_t x = 0; x != p.size(); ++x)
    {
        int32_t count = 1;

        for (uint32_t y = x + 1; y < p.size(); ++y)
        {

            if (p[x] == p[y])
            {
                ++count;
            }

            if (count > max_count)
            {
                mode = p[x];
                max_count = count;
            }
        }
    }

    if (max_count > 1)
    {
        cout << "mode is " << mode << "\n";
        cout << " repeated " << max_count << " times\n";
    }
    else
    {
        cout << "no mode found\n";
    }
}

int main()
{
    vector<uint32_t> num_list;

    //uint32_t rand_num;
    user_choice(num_list);
    print_vector_vals(num_list);
    print_mode(num_list);
}