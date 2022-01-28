#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>

using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

/*
10. Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the game do some research
(e.g., on the web using Google). Research is a common task for programmers. Use a switch-statement to solve this
exercise. Also, the machine should give random answers (i.e., select the next rock, paper, or scissors randomly). Real
randomness is too hard to provide just now, so just build a vector with a sequence of values to be used as “the next
value.” If you build the vector into the program, it will always play the same game, so maybe you should let the user
enter some values. Try variations to make it less easy for the user to guess which move the machine will make next.

*/
int game_rules(char, char);
void hand_played(char, char);

int main()
{

    // a vector with multiple choices for randomization
    vector<char> game_hand = {'R', 'P', 'R',
                              'S', 'P', 'R',
                              'S', 'P', 'R',
                              'P', 'R', 'S',
                              'S', 'R', 'P',
                              'S', 'P', 'R',
                              'R', 'P', 'R',
                              'S', 'P', 'R',
                              'P', 'R', 'S',
                              'S', 'R', 'P',
                              'S', 'P', 'R',
                              'R', 'P', 'S',
                              'R', 'S', 'P',
                              'P', 'S', 'R',
                              'P', 'R', 'S',
                              'S', 'R', 'P',
                              'S', 'P', 'R'};
    //setup randomizer
    srand(time(0));
    game_hand[rand() % game_hand.size()];

    //game variables
    char player_choice, ai_choice;
    int arule;
    //score trackers
    int ai_wins = 0, p_wins = 0, ties = 0;

    cout << "Pick a play 'R'ock, 'P'aper, 'S'cissors ";
    cout << "(Use '|' to terminate:) \n";
    while (cin >> player_choice && player_choice != '|')
    {
        //set case to upper
        player_choice = toupper(player_choice);
        //genrate ai output
        ai_choice = game_hand[rand() % game_hand.size()];
        //what did each player play
        hand_played(player_choice, ai_choice);
        //what rule applied?
        arule = game_rules(player_choice, ai_choice);

        //lets now apply the rules
        switch (arule)
        {
        case 0:
            cout << "Its a tie\n!";
            ++ties;
            break;
        case 1:
        case 2:
        case 3:
            cout << "You win!\n";
            ++p_wins;
            break;
        case 4:
        case 5:
        case 6:
            cout << "You Lose!\n";
            ++ai_wins;
            break;
        default:
            cout << "No play!\n";
            break;
        }

        cout << "\nplayer another hand or use '|' to terminate: \n";
        cout << "Pick a play 'R'ock, 'P'aper, 'S'cissors: ";
    }

    cout << "\nTotal valid game counts (invalid hands not counted): "
    << ai_wins + p_wins + ties << '\n';

    cout << "You won " << p_wins << " games\n";

    cout << "You lost " << ai_wins << " games\n";

    cout << "You tied " << ties << " games\n";
}

int game_rules(char p, char pc)
{
    //p = player, pc = ai :)
    //makes the rules for the game
    int rule;
    //rule = 1 if rock > scissors
    if (p == 'R' && pc == 'S')
    {
        rule = 1;
    }
    //rule = 2 if paper > rock
    if (p == 'P' && pc == 'R')
        rule = 2;
    //rule = 3 if scissors > paper
    if (p == 'S' && pc == 'P')
        rule = 3;

    //rule = 4 if rock > scissors for ai
    if (pc == 'R' && p == 'S')
        rule = 4;
    //rule = 5 if paper > rock for ai
    if (pc == 'P' && p == 'R')
        rule = 5;
    //rule = 6 if scissors > paper for ai
    if (pc == 'S' && p == 'P')
        rule = 6;
    //rule = 0 if it is a tie
    if (p == pc)
        rule = 0;

    return rule;
}

void hand_played(char p, char pc)
{
    //p = player, pc = ai :)
    int valid = 1;
    if (p == 'R')
        cout << "You played Rock\n";
    else if (p == 'P')
        cout << "You played Paper\n";
    else if (p == 'S')
        cout << "You played Scissors\n";
    else
        valid = 0;

    if (valid == 1)
    {
        if (pc == 'R')
            cout << "AI played Rock\n";
        else if (pc == 'P')
            cout << "AI played Paper\n";
        else
            cout << "AI played Scissors\n";
    }
    else
        cout << "AI refused to play against an invalid hand!\n";
}