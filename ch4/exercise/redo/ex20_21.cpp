#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
/*
Modify the program from exercise 19 so that when you enter a name, the program will 
output the corresponding score or name not found.

Modify the program from exercise 19 so that when you enter an integer, the program 
will output all the names with that score or score not found.
*/

int main()
{
    vector<string> names;
    vector<int> scores;
    string a_name;
    int a_score;
    cout << "Enter a name and a score: ";
    while (cin >> a_name >> a_score)
    {
        if (a_name == "NoName" && a_score == 0)
            break;

        if (names.empty())
        {
            names.push_back(a_name);
            scores.push_back(a_score);
        }
        else
        {
            for (int i = 0; i < names.size(); ++i)
            {
                if (a_name == names[i])
                {
                    cout << "a_name = " << a_name << endl;
                    cout << "*i = " << names[i] << endl;
                    throw "copied entry!";
                }
            }

            names.push_back(a_name);
            scores.push_back(a_score);
        }

        cout << "Continue to enter a name and a score: ";
        cout << "Terminate input with NoName 0\n";
    }

    cout << "Let's search a name ";
    cin >> a_name;

    bool name_found = false;
    for (int i = 0; i < names.size(); ++i)
    {

        if (a_name == names[i])
        {
            name_found = true;
            cout << names[i] << ", " << scores[i] << "\n";
        }
    }
    if (name_found == false)
        cout << "No name found!\n";

    cout << "Let's search a score ";
    cin >> a_score;

    bool score_found = false;
    for (int i = 0; i < scores.size(); ++i)
    {
        if (a_score == scores[i])
        {
            score_found = true;
            cout << names[i] << ", " << scores[i] << "\n";
        }
    }
    if (score_found == false)
        cout << "No score found\n";
}