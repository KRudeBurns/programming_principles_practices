/*
17. Write a program that finds the min, max, and mode of a sequence of strings.
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
using std::string;
using std::vector;

//fill the vector with strings
void vector_of_strings(vector<string> &p)
{
    cout << "Enter your strings to the list. use ! to stop: ";
    string entry;
    while (cin >> entry && entry != "!")
    {
        if (entry == "." || entry == "-") //just a test
        {
            cin.ignore();
        }        
        else
        {
            p.push_back(entry);
        }
    }
}

//sort the vector and return the largest and minimum value
void vector_sort(vector<string> &p)
{
    
    //using greater argument forces the sort to print in 
    //descending order from largest to smallest
    sort(p.begin(), p.end(), std::greater<>());

    
    
    cout << "Minimum value = " << *(p.end()-1) << "\n";
    cout << "Largest value = " << *(p.begin()) << "\n";   
    

}

void print_vector_vals(vector<string> &p)
{
    for (string x : p)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void print_mode(vector<string> &p)
{
    auto y = p[0];
    auto max_count = 1;
    string mode = " ";
    for (auto x = 0; x != p.size(); ++x)
    {
        int32_t count = 1;

        for (auto y = x + 1; y < p.size(); ++y)
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
        cout << "repeated " << max_count << " times\n";
    }
    else
    {
        cout << "no mode found\n";
    }
}

void run(vector<string> &p)
{
    vector_of_strings(p);
    print_vector_vals(p);
    vector_sort(p);    
    print_vector_vals(p);
    print_mode(p);
}

int main()
{
    vector<string> string_list;

    run(string_list);
}