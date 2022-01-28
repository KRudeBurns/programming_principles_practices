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

int main()
{

    vector<string> words;
    for (string temp; cin >> temp;)
    {
        words.push_back(temp);

        if (temp == "exit")
            break;
    }
    cout << "Size =" << words.size() << endl;

    while (words.size() != 0)
    {
        words.pop_back();
    }

    cout << "Size =" << words.size() << endl;
}