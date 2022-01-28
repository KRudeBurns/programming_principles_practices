/*
Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the game do some research
(e.g., on the web using Google). Research is a common task for programmers. Use a switch-statement to solve this
exercise. Also, the machine should give random answers (i.e., select the next rock, paper, or scissors randomly). Real
randomness is too hard to provide just now, so just build a vector with a sequence of values to be used as “the next
value.” If you build the vector into the program, it will always play the same game, so maybe you should let the user
enter some values. Try variations to make it less easy for the user to guess which move the machine will make next.
*/

/* game rules: 
        rock wins scissors
        paper wins rock
        scissors wins paper   
    */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //create a vector to hold the computer's values
    vector<char> rockPaperScissors = {'r', 'p', 's'};
    char comp_choice;    
    string user_choice;
    
    //randomize the entries
    //generate a random number
    
    int rand_gen;

    //game loop
    char play_on = 'y';

    while (play_on == 'y')
    {
        cout << "Enter a value {rock, paper, or scissors}: ";
        cin >> user_choice;
        char choice = tolower(user_choice[0]);
        
        //randomizer
        srand(time(0));
        rand_gen = (rand() % 1323000) + 1;

        if (rand_gen % 2 == 0)
        {
            comp_choice = rockPaperScissors[0]; //rock
        }
        else if (rand_gen % 3 == 0)
        {
            comp_choice = rockPaperScissors[1]; //paper
        }
        else
        {
            comp_choice = rockPaperScissors[2]; //scissors
        }

        cout << "computer chose: " << comp_choice << endl;
        switch (choice)
        {
        case ('r'):
            if (comp_choice == 'r')
            {

                cout << "draw";
            }
            else if (comp_choice == 's')
            {
                cout << "win";
            }
            else
            {
                cout << "loss";
            }
            break;
        case ('p'):
            if (comp_choice == 'r')
            {
                cout << "win";
            }
            else if (comp_choice == 's')
            {
                cout << "loss";
            }
            else
            {
                cout << "draw";
            }
            break;
        case ('s'):
            if (comp_choice == 's')
            {
                cout << "draw";
            }
            else if (comp_choice == 'p')
            {
                cout << "win";
            }
            else
            {
                cout << "loss";
            }
            break;
        default:
            cout << "invalid";
            break;
        }

        
        cout << "\nplay on? ";
        cin>> play_on;
        play_on = tolower(play_on);
    }
}