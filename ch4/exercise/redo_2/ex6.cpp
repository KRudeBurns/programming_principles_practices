/*
6. Make a vector holding the ten string values "zero", "one", . . . "nine". 
Use that in a program that converts a digit to its corresponding spelled-out value; 
e.g., the input 7 gives the output seven. Have the same program, using the same
input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{

    //hold strings
    vector<string> num_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter a spelled out number between zero and nine: ";
    string num;
    bool go_on = true;
    char going_ = 'y';

    while (go_on)
    {
        //this section finds entry at the index
        //because of how simple the program is I am just printing the index as the conversion
        //this works but not ideal if the vector is not sorted properly.
        //reference: https://www.geeksforgeeks.org/how-to-find-index-of-a-given-element-in-a-vector-in-cpp/
        //ref: https://www.delftstack.com/howto/cpp/find-in-vector-in-cpp/
        cin >> num;
        auto ret = find(num_strings.begin(), num_strings.end(), num);
        if (ret != num_strings.end())
        {            
            int result = ret - num_strings.begin();
            cout << "You entered " << num << " | CONVERTED TO | " << result << endl;
        }
        else
        {
            cout << "Value not found!" << endl;
        }
        //end section

        //this section allows continuance
        cout << "\nContinue? [y (if not y - exits)]: ";
        cin >> going_;
        if(going_ == 'y')
        {
            go_on = true;
        }
        else
        {
            go_on = false;
        }
        //end section
    }
}