#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

	int area(int length, int width)		//calculate the area of rectangle
	{
	    if (length <= 0 || width <= 0)
		{
		    cout << "Non positive argument for area()\n";
			throw(1);
		}
		return length * width;
	}
	
	int framed_area(int x, int y)
	{
		return area(x-2, y - 2);
	}
	
	int main()
	{
		int x = -1;
		int y = 2;
		int z = 4;
		//...
		int area1 = area(x,y);
		int area2 = framed_area(1,z);
		int area3 = framed_area(y,z);
		double ratio = double(area1)/area3;		//convert to double for floating point division

		//print output 
        cout << "area1 = " << area1 << endl;
        cout << "area2 = " << area2 << endl;
        cout << "area3 = " << area3 << endl;
        cout << "ratio = " << ratio << endl;
	}