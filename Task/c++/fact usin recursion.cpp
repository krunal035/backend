#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==0)
	return 1;
	
	return n*fact(n-1);
}


main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	
	cout<<"factorial of "<<n<<":" << fact(n);
}
