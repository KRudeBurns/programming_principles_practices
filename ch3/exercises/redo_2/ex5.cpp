#include <iostream>
using namespace std;

/*
5 Modify the program above to ask the user to enter floating-point values and store them in double variables.
Compare the outputs of the two programs for some inputs of your choice. 
Are the results the same? Should they be? What’s the difference?
*/

int main() {

    cout << "\n----------------------------------------------------------------\n";
    cout << "This program compares and works with two user inputted floating numbers\n";
    cout << "\n----------------------------------------------------------------\n";

    double val1 = 0, val2 = 0;

    cout << "Enter two numbers: ";
    cin >> val1 >> val2;

    if (val1 > val2)
    {
        cout << val1 << " > " << val2 << "\n";
    }

    if (val1 < val2)
    {
        cout << val1 << " < " << val2 << "\n";
    }

    if (val1 == val2)
    {
        cout << val1 << " == " << val2 << "\n";
    }

    cout << val1 << " - " << val2 << " = " << abs(val1 - val2)  << "\n";
    cout << val1 << " + " << val2 << " = " << val1 + val2  << "\n";
    cout << val1 << " x " << val2 << " = " << val1 * val2  << "\n";
    cout << val1 << " / " << val2 << " = " << val1 / val2  << "\n";

}