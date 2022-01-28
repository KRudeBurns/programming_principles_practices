#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*
If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as come after it,” 

fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element of the sequence.
*/
int main() {
    //contents of 4.6.3
    vector<double> temps;
    for(double temp; cin>>temp;)
    {
        temps.push_back(temp);
    }

    //compute mean temperature
    double sum = 0;
    for (int x : temps)
    {
        sum += x;
    }
    cout << "Average temperature: " << sum/temps.size() << '\n';

    //compute median temperature
    sort(temps.begin(), temps.end());    

    int median = 0;
    if(temps.size() % 2 == 0)
        median = ( temps[temps.size()/2] + temps[temps.size()/2 + 1] ) / 2;
    else
        median = temps[temps.size()/2];

    cout << "Median temperature: " << median << "\n";
}