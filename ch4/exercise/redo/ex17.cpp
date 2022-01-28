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
    vector<string> string_list;
    //request input from user
    string entry;
    cout << "Enter numbers to your list, press . to stop: ";
    while (cin >> entry && entry != ".")
    {
        //lower all entries to lowercase
        transform(entry.begin(), entry.end(), entry.begin(), ::tolower);
        string_list.push_back(entry);
        
    }

    //sort the numbers
    sort(string_list.begin(), string_list.end());

    //from a sorted array the min value is the first, and the largest value is the last
    auto largest = string_list.end() - 1;
    auto smallest = string_list.begin();
    if (*largest == *smallest)
    {
        cout << "the values are the same\n";
    }
    else
    {
        cout << "\nMin: " << *smallest << "\n";
        cout << "Max: " << *largest << "\n";
    }

    
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

    int count = 0, max_count = 0; 
    string max_val;

    for (int i = 0; i < string_list.size(); ++i)
    {
        count = 0;
        for (int j = 0; j < string_list.size(); ++j)
        {
            if (string_list[j] == string_list[i])
            {
                ++count;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            max_val = string_list[i];
        }
    }

    if (max_count <= 1)
    {
        cout << "No mode exists, no repetitions found\n";
    }
    else
    {
        cout << "You mode is '" << max_val << ".' It occured " << max_count << " times.\n";
    }
}