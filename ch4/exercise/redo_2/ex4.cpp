/*
4. Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program
asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program
should be able to identify the number after asking no more than seven questions. Hint: Use the < and <= operators and the
if-else construct.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{

	int lo = 0,
		hi = 130,
		count = 0,
		guess = 0;
	bool found = false;

	//generate a random number
	srand(time(0));
	int rand_gen = (rand() % hi) + 1;

	while (count < 7 && lo <= hi)
	{
		guess = (hi + lo) / 2;
		count++;
		cout << "I guessed " << guess << endl;
		if (guess == rand_gen)
		{
			found = true;
			break;
		}
		if (guess > rand_gen)
		{
			hi = guess - 1;
		}

		if (guess < rand_gen)
		{
			lo = guess + 1;
		}
	}

	if (found == true)
	{
		cout << "I believe you guessed " << guess << endl;
	}
	else
	{
		cout << "I dont know your number" << endl;
	}
	cout << "Took me " << count << " tries" << endl;
	cout << "your guess is " << rand_gen << endl;
}