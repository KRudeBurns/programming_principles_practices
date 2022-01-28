#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
Write a program to solve quadratic equations. A quadratic equation is of the form
ax^2 + bx + c = 0 
If you don’t know the quadratic formula for solving such an expression, do some 
research. Remember, researching how to solve a problem is often necessary 
before a programmer can teach the computer how to solve it. Use doubles for the user 
inputs for a, b, and c. Since there are two solutions to a quadratic equation, 
output both x1 and x2.
*/

double solve_quadratic_pos(double, double, double);
double solve_quadratic_neg(double, double, double);
double power_check(double, double, double);
void get_results(double, double, double);

int main()
{

    double a, b, c = 0;
    cout << "Enter your quadratic values: \n"
         << "This is the form ax^2 + bx + c \n"
         << "Enter the values for a b and c and I will tell you what x is\n";

    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    
    get_results(a,b,c);
    
}

double solve_quadratic_pos(double a, double b, double c)
{
    double x = (-b + sqrt((b * b) + (4 * a * c))) / 2 * a;

    return x;
}

double solve_quadratic_neg(double a, double b, double c)
{
    double x = (-b + sqrt((b * b) - (4 * a * c))) / 2 * a;

    return x;
}

double power_check(double a, double b, double c)
{
    return pow(b, 2) - (4 * a * c);
}

void get_results(double a, double b, double c)
{
    if (power_check(a, b, c) == 0)
    {
        cout << "One real root exists\n";
        cout << "x: " << solve_quadratic_pos(a, b, c) << "\n";
    }

    if (power_check(a, b, c) > 0)
    {
        cout << "Two real roots exist: \n";
        cout << "Positive factor x: " << solve_quadratic_pos(a, b, c) << "\n";
        cout << "negative factor x: " << solve_quadratic_neg(a, b, c) << "\n";
    }

    if (power_check(a, b, c) < 0)
    {
        cout << "Two complex roots exist: \n";
        cout << "Positive factor x: " << -b << " + sqrt(" << power_check(a, b, c)
             << ")\n";

        cout << "negative factor x: " << -b << " - sqrt(" << power_check(a, b, c)
             << ")\n";
    }
}