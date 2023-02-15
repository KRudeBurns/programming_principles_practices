#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
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
int main() {
    // number of squares, in our case default is 64
    int num_of_squares = 64;
    //counter
    int i = 1;
    unsigned long long num_of_grains = 1, grains_per_square = 1;
    

    for (i; i <= num_of_squares; ++i)
    {
        if (i == 1)
        {
            num_of_grains = 1;
            grains_per_square = 1;
        }
        else{
        //grains doubles at each square
        //grains per square *= 2;
        //number of grains increases by adding the new grains per that square        
        grains_per_square *= 2;
        num_of_grains += grains_per_square;
       }
       
       
       //number of squares needed for 1000 grains
       if (num_of_grains >= 1000 && num_of_grains < 2000)
       {
           cout << "You need at least " << i << " squares for "
                << "at least 1000 grains\n";
       }

       //number of squares needed for 1000000 grains
       if (num_of_grains >= 1000000 && num_of_grains < 2000000)
       {
           cout << "You need at least " << i << " squares for "
                << "at least 10000000 grains\n";
       }

       //number of squares needed for 1000000000 grains
       if (num_of_grains >= 1000000000 && num_of_grains < 2000000000)
       {
           cout << "You need about " << i << " squares to collect "
                << "at least 10000000 grains\n";
       }

    }

       cout << "Square Number is " << i << '\n';
       cout << "Grains allocated for this square " << grains_per_square << " grains\n"; 
       cout << "Total number of grains collected so far = " << num_of_grains << '\n';


    
}