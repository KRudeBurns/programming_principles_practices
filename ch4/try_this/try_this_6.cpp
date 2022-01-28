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
Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them
again on cout. If a word is among a few you have defined, you write out BLEEP instead of that word. Start with
one “disliked word” such as
string disliked = “Broccoli”;
When that works, add a few more.
*/
int main()
{

    vector<string> bad_words = {"house", "banana", "ape", "broccoli"};

    vector<string> words;
    cout << "type exit when done\n";
    for (string temp; cin >> temp;)
    {
        words.push_back(temp);

        if (temp == "exit")
        {
            //dont count exit in the word list
            words.pop_back();
            
            break;
        }
    }
    cout << "Size =" << words.size() << endl;
    for(int x = 0; x < words.size(); ++x)
    {
        cout << words[x] << " ";
    }
    cout << "\n";
    
    //count the words that match
    int match_count = 0;

    for (int i = 0; i < bad_words.size(); ++i)
    {        
        for (int j = 0; j < words.size(); ++j)
        {
            //cout << "comparing the word " << words[j]
                // << " with the bad word " << bad_words[i] << endl; 
                
            if (words[j] == bad_words[i])
            {
                //cout << "we got a bad word!" << endl;
                //cout << words[j] << " matches a bad word " << bad_words[i] << endl;
                //cout << "end word lap " << j << endl;
                ++match_count;
                words[j] = "**bleep**";
                break;
            }            
            //cout << "end word lap " << j << endl;
        }
        //cout << "end bad-lap " <<  i << endl;
        //cout << "==============================\n";
    }
    cout<< "number of bad matches = " << match_count << endl;
    cout << "your censored print out is : \n";
    for(int x = 0; x < words.size(); ++x)
    {
        cout << words[x] << " ";
    }
    cout << "\n";
}