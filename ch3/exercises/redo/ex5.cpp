#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open()
{
    char ch;
    cin >> ch;
}
/*
5 Modify the program from ex4 to ask the user to enter floating-point values and store them in double variables. Compare the
outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What’s the
difference?
*/
int main()
{

    double val1 = 0, val2 = 0,
           larger, smaller,
           sum = 0,
           diff = 0,
           prod = 0,
           ratio = 0;

    cout << "enter two values: ";
    while (cin >> val1 >> val2)
    {
        if (val1 == val2)
            cout << "Both units are equal" << endl;
        else
        {
            if (val1 > val2)
                larger = val1, smaller = val2;
            else
                larger = val2, smaller = val1;
            cout << "Larger unit = " << larger << " and smaller unit = " << smaller << endl;
            diff = larger - smaller;
        }
        sum = val1 + val2,
        prod = val1 * val2;
        ratio = double(val1) / double(val2);
        cout << "sum is " << sum << endl;
        cout << "difference is " << diff << endl;
        cout << "product is " << prod << endl;
        cout << "ratio is " << ratio << endl;
    }
}