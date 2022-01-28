/*
Get this little program to run. Then, modify it to read an int rather than a double. Note that sqrt() is not defined
for an int so assign n to a double and take sqrt() of that. Also, “exercise” some other operations. Note that for
ints / is integer division and % is remainder (modulo), so that 5/2 is 2 (and not 2.5 or 3) and 5%2 is 1. The
definitions of integer *, /, and % guarantee that for two positive ints a and b we have a/b * b + a%b == a.
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main() {
    cout << "Please enter a floating-point value: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n*n
         << "\nhalf of n ==" << n/2
         << "\nsquare root of n == " << round(sqrt(n))
         << "\n";
}