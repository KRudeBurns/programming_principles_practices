/*
18. Write a program to solve quadratic equations. A quadratic equation is of the form
ax2 + bx + c = 0
If you don’t know the quadratic formula for solving such an expression, do some research. Remember, researching how
to solve a problem is often necessary before a programmer can teach the computer how to solve it. Use doubles for the
user inputs for a, b, and c. Since there are two solutions to a quadratic equation, output both x1 and x2.
*/



#include "C:\Users\kufre\git\Studying\Languages\C++\a_PPAP-C++\std_lib_facilities.h"

//get user input
void get_user_input(double *, double *, double *);

//solve the equation
void quadratic_formula(double * , double *);

void run();

int main()
{
     run();
}


void get_user_input(double * a, double * b, double * c)
{     
     cout << "the format of the equation is ax^2 + bx + c = 0\n";
     cout << "what is a? ";
     cin >> *a;
     cout << "what is b? ";
     cin >> *b;
     cout << "what is c? ";
     cin >> *c;
}

void quadratic_formula(double * pos_x, double * neg_x)
{
     double a, b, c;

     get_user_input(&a, &b, &c);

     *pos_x = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);

     *neg_x = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);


}

void run()
{
     double pos_result, neg_result;

     quadratic_formula(&pos_result, &neg_result);

     cout << "the positive result is : " << pos_result << "\n";
     cout << "the negative result is : " << neg_result << "\n";

}