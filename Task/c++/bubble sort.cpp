#include<iostream>
using namespace std;

main()
{
	int a[5];
	int i,j,temp;
	
	for(i=0;i<=4;i++)
	{
		cout<<"enter number "<<i+1<<":";
		cin>>a[i];
	}
	
	cout<<"------before sorting--------"<<endl;
	
	for(i=0;i<=4;i++)
	{
		cout<<a[i]<<endl;
	}
	
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
		   if(a[i]>a[j])
		   {
              temp = a[i];
			  a[i] = a[j];
			  a[j] = temp;		   	
		   }	
		}
	}
	
	cout<<"------after sorting--------"<<endl;
	
	for(i=0;i<=4;i++)
	{
		cout<<a[i]<<endl;
	}
	
	
}
