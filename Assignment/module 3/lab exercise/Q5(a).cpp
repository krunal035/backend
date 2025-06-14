/* Write a C++ program that accepts an array of integers, calculates the sum and 
average, and displays the results. */

#include<iostream>
using namespace std;
main()
{
	int a[5];
	int i,sum=0;
	
	for(i=0;i<=4;i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	
	cout<<"-----Your array----"<<endl;
	
	for(i=0;i<=4;i++)
	{
		
		cout<<a[i]<<endl;
	}
	
	for(i=0;i<=4;i++)
	{
		sum+=a[i];	
	}
	
	int avg=sum/5;
	
	cout<<endl<<"sum of all element is:"<<sum;
	cout<<endl<<"average of all element is:"<<avg;
	
}
