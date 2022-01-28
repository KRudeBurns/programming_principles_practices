#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
/*
19. Write a program where you first enter a set of name-and-value pairs, such as Joe 
17 and Barbara 22. For each pair, add the name to a vector called names and the 
number to a vector called scores (in corresponding positions, so that if 
names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. 

Check that each name is unique and terminate with an error message if a name is entered twice. 

Write out all the (name,score) pairs, one per line.
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

    for(int i = 0; i < names.size(); ++i)
    {
        cout << names[i] << ", " << scores[i] << "\n";
    }
}