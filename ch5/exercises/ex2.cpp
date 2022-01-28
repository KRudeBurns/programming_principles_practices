
/*

2. The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many errors in it.
Find the errors, list them, and correct the code.
Click here to view code image

double ctok(double c) // converts Celsius to Kelvin
{
int k = c + 273.15;
return int
}

int main()
{
double c = 0; // declare input variable
cin >> d; // retrieve temperature to input variable
double k = ctok("c"); // convert temperature
Cout << k << '/n' ; // print out temperature
}


*/

//corrected code below

#include <iostream>
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
    //wrong: k should be a double.
    double k = c + 273.15;

    //this function must return a value not a type.
    //it must return a double.
    //semi colon was missing
    return k; 
}

int main()
{
    double c = 0;         // declare input variable
    cin >> c;             // read c not d - d was not declared
    double k = ctok(c); // ctok('c') is wrong. c is not a char.
    cout << k << '\n';    // print out temperature
}
