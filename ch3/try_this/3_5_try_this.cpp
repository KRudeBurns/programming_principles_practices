#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }
//program to detect repeated words
int main() {
    string previous = " "; //previous word; initialized to not a word
    string current;
    int counter = 0;
    cout << "Please enter a word "; 
    while (cin >> current)
    {
        if (previous == current)
        {
            ++counter;
            cout << "Repeated words: " << current << "\n ";
            cout << "\nNumber of repeated words = " << counter;
        }
        previous = current; //assign current word to previous
        cout << "\nPlease enter a word [Ctrl+C to exit] "; 
    }
    
}