#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
5 Modify the program above to ask the user to enter
floating-point values and store them in double variables. Compare the
outputs of the two programs for some inputs of your choice.
Are the results the same? Should they be? What’s the difference?
*/
int main() {
    double val1 = 0, val2 = 0;
    cout << "Enter two decimals: ";
    cin >> val1 >> val2;

    if(val1 > val2)
        cout << val1 << " > " << val2 << "\n\n";
    else if (val1 == val2)
        cout << val1 << " = " << val2 << "\n\n";
    else
        cout << val1 << " < " << val2 << "\n\n";

    double sum = val1 + val2;
    cout << val1 << " + " << val2 << " = " << sum << "\n";

    double diff = val1 - val2;
    cout << val1 << " - " << val2 << " = " << diff << "\n";

    double product = val1 * val2;
    cout << val1 << " x " << val2 << " = " << product << "\n";

    double ratio = val1 / val2;
    cout << val1 << "/" << val2 << " = " << ratio << "\n";
}