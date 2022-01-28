/*
2. If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as
come after it,” fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element of
the sequence.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<double> temps;	
	
	for(double temp; cin >> temp;)
	{
		temps.push_back(temp);
	}
	
	for (auto x : temps )
	{
		cout << x << " ";
	}
	cout << "\n";
	//compute the median
	//sort
	sort(temps.begin(), temps.end());
	for (auto x : temps )
	{
		cout << x << " ";
	}
	
	//median is middle element
	
	int length = temps.size()/2;
	double median = (temps.size()%2 == 0)? (temps[length] + temps[length-1]) / 2 : temps[length];
	cout << "\n median: " << median << endl;
}
	