#include <iostream>
#include <algorithm>
#include <vector>
/*
3. Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given
route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance
between two neighboring cities. Find and print the mean distance between two neighboring cities.
*/
using namespace std;
int main()
{
	vector <double> distances;
	double sum = 0;
	
	for (double dis; cin >> dis;)
	{
		distances.push_back(dis);
		sum += dis;
	}		
	sort(distances.begin(), distances.end());	
	//print the mean value
	cout << "total distances : " << sum << endl;
	cout << "average distances : " << sum / distances.size() << endl;
	cout << "smallest distance: " << distances[0] << endl;
	cout << "largest distance: " << distances[distances.size()-1] << endl;
}