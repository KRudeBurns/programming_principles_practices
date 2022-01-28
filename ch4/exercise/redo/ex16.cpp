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
    //get a series of numbers
    vector<int> num_list;
    //request input from user
    int num;
    cout << "Enter numbers to your list, press . to stop: ";
    while (cin >> num)
    {
        num_list.push_back(num);
    }

    //sort the numbers
    sort(num_list.begin(), num_list.end());

    //print the list
    for (auto i = num_list.begin(); i != num_list.end(); ++i)
    {
        cout << *i << " ";
    }

    //from a sorted array the min value is the first, and the largest value is the last
    auto largest = num_list.end() - 1;
    auto smallest = num_list.begin();
    if (*largest == *smallest)
    {
        cout << "the values are the same\n";
    }
    else
    {
        cout << "\nMin: " << *smallest << "\n";
        cout << "Max: " << *largest << "\n";
    }

    //from a sorted array, we can find the mean
    int sum = 0;
    for (auto i = num_list.begin(); i != num_list.end(); ++i)
    {
        sum += *i;
    }

    int mean = sum / num_list.size();
    cout << "The mean of your series = " << mean << "\n";

    /*to find the median
    if the size of the list is even, we take the middle 2 numbers
    and divide by 2

    if odd, we take the middle number only
    */
    double median;
    if (num_list.size() % 2 == 0)
    {
        median = (num_list[num_list.size() / 2] + num_list[num_list.size() / 2 - 1]) / 2;
    }
    else
    {
        median = num_list[num_list.size() / 2];
    }

    cout << "Your median value is : " << median << "\n";

    /*TO FIND THE MODE
    https://www.tutorialspoint.com/learn_c_by_examples/mode_program_in_c.htm
    procedure mode()
   
   Array A
   FOR EACH value i in A DO
      Set Count to 0
      FOR j FROM 0 to i DO
         IF A[i] = A[j]
            Increment Count
         END IF
      END FOR
      
      IF Count > MaxCount
         MaxCount =  Count
         Value    =  A[i]
      END IF
   END FOR
   DISPLAY Value as Mode
   
   end procedure
    
    */

    int i, j, count = 0, max_count = 0, max_val;

    for (i = 0; i < num_list.size(); ++i)
    {
        count = 0;
        for (j = 0; j < num_list.size(); ++j)
        {
            if (num_list[j] == num_list[i])
            {
                ++count;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            max_val = num_list[i];
        }
    }

    if (max_count == 1)
    {
        cout << "No mode exists, no repetitions found\n";
    }
    else
    {
        cout << "You mode is " << max_val << " it occured " << max_count << " times.\n";
    }
}