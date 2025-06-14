/* Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope. */

#include<iostream>
using namespace std;

class student{
	public:
		int a;
		int b;
    
    get()
    {
    	cout<<"enter num1:";
    	cin>>a;
    	cout<<endl<<"enter num2:";
    	cin>>b;
	}
    
	addition()
	{
	   int ans;
	   ans=a+b;
	   return ans;	
	}		

};

main()
{
	student s;
	s.get();
	cout<<"addition is:"<<s.addition();
}
