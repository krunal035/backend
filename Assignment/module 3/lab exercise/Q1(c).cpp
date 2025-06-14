/* o Write two small programs: one using Procedural Programming (POP) to calculate the 
area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task. 
o Objective: Highlight the difference between POP and OOP approaches. */

#include<iostream>
using namespace std;

class rectangle{
	public:
		int length;
		int width;
		
	getdetail()
	{
		cout<<endl<<endl<<"Enter length of rectangle:";
		cin>>length;
		cout<<endl<<"Enter width of rectangle:";
		cin>>width;
	}
	
	display()
	{
		int ans=length*width;
		cout<<"Area of Rectangle is:"<<ans<<endl;
	}
};

calculaterect(int l,int w)
{
	return l*w;
}

main()
{
	int l,w;
	
	cout<<"enter length of rectangle:";
	cin>>l;
	
	cout<<"enter width of rectangle:";
	cin>>w;
	
	cout<<"are of rectangle is "<<calculaterect(l,w);	
	
	
	rectangle r;
	r.getdetail();
	r.display();
}
