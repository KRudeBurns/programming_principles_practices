#include "std_lib_facilities.h"
/*
Define a class Name_value that holds a string and a value. Rework exer-
cise 19 in Chapter 4 to use a vector<Name_value> instead of two vectors.
*/


/*
ch4, q19. Write a program where you first enter a set of name-and-value pairs, such
as Joe 17 and Barbara 22. For each pair, add the name to a vector called
names and the number to a vector called scores (in corresponding po-
sitions, so that if names[7]=="Joe" then scores[7]==17). Terminate input
with NoName 0. Check that each name is unique and terminate with an
error message if a name is entered twice. Write out all the (name,score)
pairs, one per line.
*/

class Name_value {
    string name;
    int value;
}

int main()
{
    Name_value my_name;
}