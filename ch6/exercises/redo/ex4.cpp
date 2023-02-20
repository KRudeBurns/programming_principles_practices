/*
Define a class Name_value that holds a string and a value.
Rework exercise 19 in Chapter 4 to use a vector<Name_value>
instead of two vectors.
*/
#include "std_lib_facilities.h"

class Name_value
{
private:
    string name;
    double value;

public:
    Name_value() : name(), value()
    {
    }

    Name_value(string name, double value)
    {
        this->name = name;
        this->value = value;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setValue(double value)
    {
        this->value = value;
    }

    string getName()
    {
        return name;
    }

    double getValue()
    {
        return value;
    }
};

/*Exercise 4.19
19. Write a program where you first enter a set of name-and-value pairs,
such as Joe 17 and Barbara 22.
For each pair, add the name to a vector called names and the
number to a vector called scores (in corresponding positions, so that if
names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0.

Check that each name is unique and terminate with an error message if a name is entered twice.

Write out all the (name,score) pairs, one per line.

*/

int main()
{

    string name;
    double score;
    vector<Name_value> name_vals;

    while (true)
    {
        cout << "Enter a name and a value";
        cout << "\n\'NoName\' and 0 will terminate\n";
        cout << "name > ";
        getline(cin, name);
        cout << "score > ";
        cin >> score;
        cout << name << " " << score << "\n";

        if (name == "NoName" && score == 0)
            break;

        if (name_vals.empty())
        {
            name_vals.push_back(Name_value(name, score));
        }
        else
            for (auto x : name_vals)
            {                
                if (name.compare(x.getName()) == 0)
                {
                    cout << "Not adding duplicate!\n";
                    break;
                }

                name_vals.push_back(Name_value(name, score));
            }

        // reset to create a new space again
        getchar();
        cin.clear();
    }

    // print
    for (auto i : name_vals)
    {
        cout << i.getName() << " "
             << i.getValue() << endl;
    }
}