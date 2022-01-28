#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

	int area(int length, int width)			//calculate the area of rectangle
	{
		return length * width;
	}
	
	int framed_area(int x, int y)	//calculate the area within frame
	{
		return area(x-2, y-2);
	}
	

	//option a - let the caller set up error checks
	int main()
	{
		int x = 0;
		int y = 0;
		int z = 0;
		cout << "Enter a value for x, y, and z: ";
		cin >> x >> y >> z;

		//caller sets up error checks
		if (x <= 0 || y <= 0)
		{
			cout << "Non-positive argument for finding area1\n";
			throw(1);
		}
		int area1 = area(x,y);

		//create a constant for our boundary checks
		constexpr int frame_width = 2;

		if (1-frame_width <= 0 || z-frame_width <= 0)
		{
			cout << "Non-positive argument for finding area2\n";
			throw(1);
		}
		int area2 = framed_area(1,z);

		
		if (z-frame_width <= 0 || y-frame_width <=0)
		{
			cout << "Non-positive argument for finding area3\n";
			throw(1);
		}
		int area3 = framed_area(y,z);

		double ratio = double(area1)/area3;		//convert to double for floating point division

        //print output 
        cout << "area1 = " << area1 << endl;
        cout << "area2 = " << area2 << endl;
        cout << "area3 = " << area3 << endl;
        cout << "ration = " << ratio << endl;
	}