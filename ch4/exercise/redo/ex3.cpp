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
3. Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given
route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance
between two neighboring cities. Find and print the mean distance between two neighboring cities.
*/

int main()
{
    double entries, total_distance;
    vector<double> distances;

    cout << "Enter distances (whole or fractionals): ";
    while (cin >> entries)
    {

        //add entries and ignore zero
        if (entries != 0)
        {
            distances.push_back(entries);
            total_distance += entries;
        }

        cout << "use | to terminate and see your results: ";
    }

    //sort the vector
    sort(distances.begin(), distances.end());

    //print the sorted vector
    int x = 0;
    for (x; x < distances.size(); ++x)
        cout << distances[x] << " ";
    cout << "\n";

    //method one of finding last index of a vector, us front() and back()
    cout << "first index = " << distances.front() << "\n";
    cout << "last index = " << distances.back() << "\n";

    //method two of finding the last index of a vector, use its size()
    int n = distances.size();
    cout << "smallest entry  = " << distances[0] << "\n";
    cout << "largest entry = " << distances[n - 1] << "\n";

    //calculate the mean distance
    double mean;
    mean = total_distance / n;
    cout << "Total distance = " << total_distance << "\n";
    cout << "Mean distance = " << mean << "\n";
}