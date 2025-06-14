/* Write a C++ program that asks the user to guess a number between 1 and 100. The 
program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts. */

#include<iostream>
using namespace std;
main()
{
    int original = 76;
	int guess;
	
	while(1)
	{
		cout<<endl<<"Guess the Number:";
		cin>>guess;
		if(original>guess)
		{
			cout<<"Too low! Try a higher number.";
		}
		else if(original<guess)
		{
			cout<<"Too high! try a smaller number.";
		}
		else 
		{
            cout << "Congratulations! You guessed the correct number: " << original << endl;
            break;
        }
	}
}

