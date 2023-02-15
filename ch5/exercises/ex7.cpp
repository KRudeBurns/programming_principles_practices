#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

/*

Quadratic equations. To solve these, one uses the quadratic formula.
There is a problem, though: if b^2–4ac is less than zero, then it will fail. 

Write a program that can calculate x for a
quadratic equation. Create a function that prints out the roots of a 
quadratic equation, given a, b, c. When the program
detects an equation with no real roots, have it print out a message. 

How do you know that your results are plausible? 
Can you check that they are correct?


*/

void quad_roots(double a, double b, double c)
{
    double differentiator = pow(b,2) - (4*a*c);
    if (differentiator < 0)
    {
        cout << "no real roots can be found.";
        return;
    }
    double root1 = (-b + sqrt(differentiator))/ (2*a);
    double root2 = -b - sqrt(differentiator) / (2*a);

    cout << "Root 1, x = " << root1 << "\n";
    cout << "Root 2, x = " << root2 << "\n"; 
}

int main()
{
    double a, b, c;
    cout << "Enter the coefficients a, b & c of your quadratic equation\n";
    cin >> a >> b >> c;

    quad_roots(a, b, c);
}