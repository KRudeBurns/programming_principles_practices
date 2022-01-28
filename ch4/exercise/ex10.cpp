#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <random>
#include <time.h>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
10. Write a program that plays the game “Rock, Paper, Scissors.” 
Use a switch-statement to solve this exercise. Also, the machine
should give random answers (i.e., select the next rock, paper,
 or scissors randomly).

Real randomness is too hard to provide just now, 
so just build a vector with a sequence of values to be used as “the next
value.”
If you build the vector into the program, it will always play the same
game, so maybe you should let the user enter some values. 

Try variations to make it less easy for the user 
to guess which move the machine will make next.
*/

int main() {
    
    //create a randomizer
    srand(time(0)); 
    //compute scores   
    int comp_score = 0, player_score = 0, draw_score = 0, hand_index = 0;

    //create vector for game play
    vector<string> game_hand = {"Rock", "Paper", "Scissors",
                                 "Rock", "Scissors","Paper", 
                                 "Paper", "Scissors", "Rock", 
                                 "Paper", "Rock", "Scissors", 
                                "Scissors", "Rock", "Paper",
                                "Scissors", "Paper", "Rock"
                               };
    

    //Request user input
    char user_input = ' ';
    cout << "Play either: (R)ock, (P)aper, (S)cissors: ";
    
    
    while (cin >> user_input)    
    {        
        hand_index = rand()%17;
        //generate the computers hand -> random % 3
        cout << "hand index = " << hand_index << "\n";
        cout << game_hand[hand_index] << '\n';        

        switch (user_input){
        //rock loses to paper
        case 'r': case 'R':
            if(game_hand[hand_index] == "Paper")
            {
                cout << "Rock loses to " << game_hand[hand_index] <<'\n';
                comp_score++;
            }
            else if (game_hand[hand_index] == "Rock")
            {
                cout << "Rock draws with " << game_hand[hand_index] <<'\n';
                draw_score++;
            }
            else
            {
                cout << "Rock wins\n";
                player_score++;
            }
            break;
        //paper loses to scissors    
        case 'p': case 'P':
            if(game_hand[hand_index] == "Scissors")
            {
                cout << "Paper loses to " << game_hand[hand_index] <<'\n';
                comp_score++;
            }
            else if (game_hand[hand_index] == "Paper")
            {
                cout << "Paper draws with " << game_hand[hand_index] <<'\n';
                draw_score++;
            }
            else
            {
                cout << "Paper wins\n";
                player_score++;
            }
            break;
        //scissors loses to rock
        case 's': case 'S':
            if(game_hand[hand_index] == "Rock")
            {
                cout << "Scissors loses to " << game_hand[hand_index] <<'\n';
                comp_score++;
            }
            else if (game_hand[hand_index] == "Scissors"){
                cout << "Scissors draws with " << game_hand[hand_index] <<'\n';   
                draw_score++;
            }
            else
            {
                cout << "Scissors wins\n";
                player_score++;
            }
            break;
        default:
            cout << "invalid entry\n";
            break; 
        }
        cout << "Player: "<< player_score << " | "
             << "Computer: " << comp_score << " | " 
             << "Draws: " << draw_score << "\n";
        if (player_score > comp_score)
        {
            cout << "You are winning\n";
        }
        else if (player_score == comp_score)
        { 
            cout << "Its a tie so far\n";
        }
        else
        {
            cout << "You are losing\n";
        }
        
        cout << "Play either: (R)ock, (P)aper, (S)cissors "
             << "(use Ctrl + C to quit): ";
    }


}