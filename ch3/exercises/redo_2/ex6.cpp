
/*
6 Write a program that prompts the user to enter three integer values, 
and then outputs the values in numerical sequence separated by commas. 
So, if the user enters the values 10 4 6, the output should be 4, 6, 10. 
If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>
using namespace std;

int main() {

    cout << "\n-------------------------------------------------------------\n";
    cout << "This program collects user input, sorts it, and prints it out\n";
    cout << "\n-------------------------------------------------------------\n";

    int const SIZE = 13;
    int entry[SIZE];

    cout << "Enter 3 numbers to get the sorted output\n";
    int i = 0;
    while(i < SIZE){
        cout << "Keep entering: ";
        cin >> entry[i];
        ++i;
    }

    

    for(int i = 0; i < SIZE; ++i)
    {
        if (i+1 > SIZE)
            break;
        

        int temp = 0;

        for (int j = i+1; j < SIZE; ++j)
        {
            cout << "\ncomparing " << entry[i] << " against " << entry[j] << "\n";
            if (entry[i] > entry[j])
            {               
               temp = entry[i];
               entry[i] = entry[j];
               entry[j] = temp;               
            }            
        }


        
    }

    for(int i = 0; i < SIZE; ++i)
    {
        cout << entry[i] << ", ";
    }




}