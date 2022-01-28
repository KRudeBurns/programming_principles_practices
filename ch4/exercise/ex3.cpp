#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/* Read a sequence of double values into a vector. 
Think of each value as the distance between two cities along a given
route. 
Compute and print the total distance (the sum of all distances). 

Find and print the smallest and greatest distance
between two neighboring cities. 

Find and print the mean distance between two neighboring cities.
 */

int main() {
    //read in distances
    vector<double> distances;
    double distance = 0.0, total_distance = 0.0;


    cout << "Enter distances [use | when you are done]: ";
    while(cin >> distance)
    {
        distances.push_back(distance);
        total_distance += distance;
    }

    //unsorted
    for (int i = 0; i < distances.size(); ++i)
    {
        cout << distances[i] << " ";
    }
    cout << '\n';
    
    //sorted
    sort(distances.begin(), distances.end());
    for (int i = 0; i < distances.size(); ++i)
    {
        cout << distances[i] << " ";
    }
    cout << '\n';

    //print largest and smallest values
    cout << "Largest distance: " << distances[distances.size()-1] << "\n"    
         << "Smallest distance: " << distances[0] << "\n"
         << "Sum of distances: " << total_distance << "\n"
         << "Mean of distances: " << total_distance/distances.size() << "\n";        
}