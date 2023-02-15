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
    Name_value *nv = new Name_value;
    nv->setName("James");
    nv->setValue(152.35);

    unique_ptr<Name_value> nv2(new Name_value);
    nv2->setName("Roger");
    nv2->setValue(352.32);

    vector<Name_value *> name_vals;
    name_vals.push_back(nv);
    cout << name_vals.at(0)->getName() << endl;
    cout << name_vals.at(0)->getValue() << endl;

    vector<unique_ptr<Name_value>> name_vals2;
    name_vals2.emplace_back(move(nv2));
    cout << name_vals2.at(0)->getName() << endl;
    cout << name_vals2.at(0)->getValue() << endl;
}