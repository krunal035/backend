#include<iostream>
using namespace std;

class prime{
	private:
		int n,i,count=0;
		
	friend fun1(prime &obj);
};

fun1(prime &obj)
{
	cout<<"enter no:";
	cin>>obj.n;
	
	for(obj.i=1;obj.i<=obj.n;obj.i++)
	{
		if(obj.n%obj.i==0)
		{
			obj.count++;
		}
		
	}
	
	if(obj.count==2)
	{
		cout<<obj.n<<" is a prime number!!"<<endl;
	}
	else
	{
		cout<<obj.n<<" is not a prime number!!"<<endl;
	}
}

main()
{
	prime p;
	fun1(p);
}
