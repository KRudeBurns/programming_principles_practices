
/*
7. Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the
output should be Fitzgerald, Hemingway, Steinbeck.
*/

#include <iostream>
using namespace std;

int main() {

    cout << "\n-------------------------------------------------------------\n";
    cout << "This program collects user inputted Strings, sorts it, and prints it out\n";
    cout << "\n-------------------------------------------------------------\n";

    int const SIZE = 15;
    string entry[SIZE];

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
        

        string temp = " ";
        int compares = 0;

        cout << "value at index " << i << " = " << entry[i] << "\n";
        cout << "value at index " << i+1 << " = " << entry[i+1] << "\n";

        for (int j = i+1; j < SIZE; ++j)
        {            

            if (entry[i] > entry[j])
            { 
               cout << "\nswapping \"" << entry[i] << "\" against \"" << entry[j] << "\"\n\n";              
               temp = entry[i];
               entry[i] = entry[j];
               entry[j] = temp;               
               ++compares;
            }     
            
        }
        cout << "value at index " << i << " = " << entry[i] << "\n";
        cout << "value at index " << i+1 << " = " << entry[i+1] << "\n";
        cout << "# of compares and swaps = " << compares << "\n\n";    
    }

    for(int i = 0; i < SIZE; ++i)
    {
        cout << entry[i] << ", ";
        if(i == SIZE-1)
           cout << entry[i] << ".";
    }
}

/* A write-up on the sorting used here

1. Using a single loop was not expedient here. Because the loop went through the array once and that was it.

2. You need to be able to compare each element and then sort it, then go back and compare again. I could not do this with a single loop. Hence the double loop was needed.

//Using the Double Loop
//Reading the loop's code

line:-> for(int i = 0; i < SIZE; ++i)
The loops originator starts at index i = 0; which is the first index of the loop and will go through the entire loop.

Line:-> if (i+1 > SIZE)
            break;
    
    1. This is my overflow protection. if the i+1 > size then we break. This is useful for the comparison.

    2. Since the index i is comparing against the next index i+1, I do not want to compare against an overflow value, so therefore the comparison
    ends when the index i+1 is greater than the size of the loop.


Line:-> string temp = " "; or int temp = 0 in ex 6.

    1. The temp value is used for the swaps. 
    2. Its best to start at a null value each time I compare.

    3. If I wanted to avoid using temp, then I will do a summed-swap. As seen below:
        //summed swap example:
        Where val1 = val1+val2, val2 = val1-val2; val1 = val1-val2.
        Given val1 = 3, val2 = 2, swap it.
        val1 = 3
        val2 = 2
        val1 = val1+val2 = 3 + 2 = 5
        val2 = val1 - val2 = 5 - 2 = 3
        val1 = val1 - val2 = 5 - 3 = 2
        val1 = 2
        val2 = 3

Line:-> for (int j = i+1; j < SIZE; ++j)
   1. The inner loop originates at the next index from i. This is because we do not compare value at i against itself. So we start at the next index.
   2. We still the comparison to run till the end of the array. 

Line:-> if (entry[i] > entry[j])
   1. The comparison looks at the value at i, versus the value at j. We only do the swap if i's value is greater than j's value. 
   
   2. Of course this means that if i's val < j's val, then we leave the value in place. Which is good.


Lines -> temp = entry[i];
         entry[i] = entry[j];
         entry[j] = temp;
    
    this is explained already above. and it is the swap we use.



*/