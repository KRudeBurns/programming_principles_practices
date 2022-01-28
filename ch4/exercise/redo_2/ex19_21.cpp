/*
19. Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add
the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if
names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and
terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
#include <functional>
#include <ctime>
#include <iomanip>
using std::cin;
using std::cout;
using std::mt19937; //mersenne twister engine which is a psuedo random number generator
using std::random_device;
using std::setw;
using std::string;
using std::vector;

//global vectors
vector<int> v_scores;
vector<string> v_names;

//program's purpose
void programs_purpose();

//request user input for names and score
void get_user_input(string *, double *);

//print value pairs
void print_values();

//search for names and print corresponding score
void search_a_name();

//search a score and print the corresponding name
void search_a_score();

//run
void run();

int main()
{
    run();
}

void run()
{
    string names;
    double scores;
    v_scores.clear();
    v_names.clear();

    programs_purpose();
    get_user_input(&names, &scores);

    print_values();
    search_a_name();
    search_a_score();
}

void programs_purpose()
{
    cout << "This program will take your entry of a name and number pair\n";
    cout << "It will print it out when you request it\n";
}

void get_user_input(string *name, double *score)
{
    cout << "Enter a name and a score: \n";
    while (cin >> *name && cin >> *score)
    {
        if (*name == "noname" && *score == 0)
        {
            cout << "you chose to exit\n";
            break;
        }

        bool dups;
        for (string x : v_names)
        {
            if (*name == x)
            {
                cout << "Duplicate found, exiting entries.\n";
                dups = true;
                break;
            }
        }
        if (dups)
        {
            break;
        }

        v_names.push_back(*name);
        v_scores.push_back(*score);

        cout << "Enter a name and a score: \n";
    }
}

void print_values()
{
    cout << setw(1) << "NAMES" << setw(15) << "SCORES\n";
    cout << "-----------------\n";
    for (int x = 0; x < v_names.size(); ++x)
    {

        cout << setw(1) << v_names[x] << setw(13) << v_scores[x] << "\n";
    }
}

void search_a_name()
{
    string search_term;
    cout << "Search a name to print\n";
    cin >> search_term;

    bool found_name = false;

    for (int x = 0; x < v_names.size(); ++x)
    {
        if (search_term == v_names[x])
        {
            found_name = true;
            cout << v_scores[x] << "\n";
            break;
        }
    }
    if(found_name == false)
    {
        cout << "name not found \n";
    }
}

void search_a_score()
{
    int score_search;
    cout << "Search a score to print the name\n";
    cin >> score_search;

    
    bool found = false;

    cout << "The names that have the score are: ";
    for (int x = 0; x < v_scores.size(); ++x)
    {

        if (score_search == v_scores[x])
        {
            found = true;
            cout << v_names[x] << "\n";
        }
    }

    if (found == false)
    {
        cout << "No match found\n";
    }

}