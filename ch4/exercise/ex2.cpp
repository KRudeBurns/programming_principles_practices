#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
/*
2. If we define the median of a sequence as “a number so that 
exactly as many elements come before it in the sequence as
come after it,” fix the program in §4.6.3 so that it always 
prints out a median. 
Hint: A median need not be an element of the sequence.
*/
int main() {
    vector<double> temps;
    cout << "Enter temperature values [ use | to stop input]: ";
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
    cout << "\nAverage temperature: " << sum/temps.size() << '\n';

    //sort temperature entries
    sort(temps.begin(), temps.end());
    for(int i = 0; i < temps.size(); ++i)
    {
        cout << temps[i] << " ";
    }

    //compute median temperature (old method)
    //cout << "\nMedian temperature: " << temps[temps.size()/2] << '\n';

    //if # of numbers is even, median = 2 middle pair sum / 2
    double median = 0.0;
    if(temps.size() % 2 == 0)
    {        
        median = (temps[(temps.size()/2)] + temps[temps.size()/2 - 1])/2;
        cout << "\nMedian temperature: " << median << "\n\n";
    }
    else //odd count, median = size/2
    {
        median = temps[temps.size()/2];
        cout << "\nMedian temperature: " << median << "\n\n";
    }
    
}