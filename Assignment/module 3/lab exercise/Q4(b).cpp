/* Write a C++ program that calculates the factorial of a number using recursion.*/

#include<iostream>
using namespace std;

factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	
	return n*factorial(n-1);
}

main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	
	cout<<endl<<"Factorial of "<<n<<" is:"<<factorial(n)<<endl;
}
