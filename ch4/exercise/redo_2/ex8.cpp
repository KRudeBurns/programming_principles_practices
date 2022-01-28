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

void increment_grains(vector<uint32_t> &g_store, uint32_t &curr, uint32_t &prior, uint32_t &demand)
{

    int i = 0; //index
    uint32_t sum = 0;

    while (sum <= demand)
    {
        if (i == 0) //initial condition
        {
            //force the vector to clear and reset it.
            //I am doing this because I am using reference for the function. 
            //Otherwise, I will just keep adding to the same vector and getting the wrong size
            if (!g_store.empty())
            {
                g_store.clear();
            }

            g_store.push_back(curr);
        }
        else
        {
            prior = g_store[i - 1]; //update_prior_grains count
            curr = 2 * prior;       //grain count at the current index is always double that of the prior index
            g_store.push_back(curr);
        }

        sum += g_store[i];
        ++i;
    }

    cout << "------------------------------------------------------------------\n"
         << "Number of grains demanded \t\t" << demand << "\n"
         << "Total number of grains collected \t " << sum << "\n"
         << "Total number of squares used \t\t " << i << "\n"
         << "------------------------------------------------------------------\n";

    //reset values

    curr = 1, //initial value at first index
        prior = 0,
    sum = 0,
    demand = 0; //number of grains I need to stop adding to the vector //halting point
    i = 0;
}

int main()
{
    vector<uint32_t> grains;
    uint32_t current_grains = 1, //initial value at first index
        prior_grains = 0, sum_of_all_grains = 0,
             grains_demanded; //number of grains I need to stop adding to the vector //halting point

    increment_grains(grains, current_grains, prior_grains, grains_demanded = 1000);    
    increment_grains(grains, current_grains, prior_grains, grains_demanded = 1000000);   
    increment_grains(grains, current_grains, prior_grains, grains_demanded = 1000000000);
}

/*
five squares
@ zero
      
      num_of_grains = 0;
      sum_of_all_grains = 0;    
      
      
@ sq 1       
      num_of_grains = 1;
      sum_of_all_grains += 1;
      
@sq 2:
     prior_num_of_grains = num_of_grains ===> 1;
     num_of_grains = 2*prior_num_of_grains ===> 2 * 1 = 2;  //we are doubling what we have
     sum_of_all_grains += num_of_grains => 1 + 2 = 3;
@sq 3:
     prior_num_of_grains = num_of_grains = 2;
     num_of_grains = 2*prior_num_of_grains ===> 2 * 2 = 4;  //we are doubling what we have
     sum_of_all_grains += num_of_grains => 3 + 4 = 7;

@sq 4:
     prior_num_of_grains = num_of_grains = 4;
     num_of_grains = 2*prior_num_of_grains; ===> 2 * 4 = 8;  //we are doubling what we have
     sum_of_all_grains += num_of_grains => 7 + 8  = 15;

@sq 5:
     prior_num_of_grains = num_of_grains = 8;
     num_of_grains = 2*prior_num_of_grains; ===> 2 * 8 = 16;  //we are doubling what we have
     sum_of_all_grains += num_of_grains => 15 + 16  = 31;


---------------------------------------------------------------------------------------------------------------------------
//trying this with a vector might be easier
---------------------------------------------------------------------------------------------------------------------------
//a vector of grains of type uint32_t
//uint32_t -> unsigned 32 bit integer type. 
//this is better than using unsigned int, or unsigned long since long is 64 bit.

vector <uint32_t> grains;  
uint32_t current_grains = 1,  //initial value at first index
prior_grains = 0,
sum_of_all_grains = 0,
grains_demanded = 1000,      //number of grains I need to stop adding to the vector //halting point
i = 0;    //index


while (sum_of_all_grains <= grains_demanded)  //keep adding till false
{
   if(i == 0 && grains.empty())    //initial condition i = 0 & vector is empty
   {
    grains.push_back(current_grains);           
   }   
   else   
   {
       prior_grains = grains[i-1];    //update_prior_grains    
       grains.push_back(2 * prior_grains);    //always double the value at the next index
   }   
   sum_of_all_grains += grains[i];
}


*/