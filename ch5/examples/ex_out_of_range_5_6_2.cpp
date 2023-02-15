#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <stdexcept>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
//for some reason the error checker does not work.
int main() {
    try
    {
        vector<int> v;
        for(int x; cin>>x;)
        {
            v.push_back(x);
        }
        for (int i = 0; i <= v.size(); ++i)
        {
            cout << "v[" << i << "] == " << v[i] << "\n" ;
        }   

        return 0;     
    }
    catch(std::out_of_range& e)
    {
        cerr << "Oops! Range error "<< e.what() << "\n";
        keep_window_open();
        return 1;
    }
    catch(...) //catch all other exceptsion
    {
        cerr << "Exception: something went wrong\n";
        keep_window_open();
        return 2;
    }
    
}