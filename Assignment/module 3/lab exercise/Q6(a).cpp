/* Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions */

#include<iostream>
using namespace std;

class calculator{
	public:
            int a,b;
			
			
		getdata(int m,int n)
		{
			a=m;
			b=n;
		}       		
		
		
		addition()
		{
			return a+b;
		}
		
		substraction()
		{
			return a-b;
		}
		
		multiplication()
		{
			return a*b;
		}
		
		division()
		{
			return a/b;
		}
};

main()
{
	calculator c;
	int a,b;
	
	cout<<"enter two number:";
	cin>>a>>b;
	
	c.getdata(a,b);
	cout<<endl<<"Addition is:"<<c.addition()<<endl;
	cout<<endl<<"Substraction is:"<<c.substraction()<<endl;
	cout<<endl<<"Multiplication is:"<<c.multiplication()<<endl;
	cout<<endl<<"Division is:"<<c.division()<<endl;
	
}
