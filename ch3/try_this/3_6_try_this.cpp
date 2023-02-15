#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
//repeated words vs2
int main() {
    int number_of_words = 0;
    string previous = " ";
    string current;
    cout << "Please enter a word "; 
    while (cin >> current)
    {
        ++number_of_words; //increase word count
        if(previous == current)
        {
            cout << "Word number " << number_of_words
                 << "\nrepeated: " << current << "\n";        
        }
        previous = current;
    }
}