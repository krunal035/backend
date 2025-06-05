#include<iostream>
using namespace std;

template <typename T>

T my_max(T x,T y)
{
	if(x>y)
	{
		cout<<x<<" is gretest!!"<<endl;
	}
	else
	{
		cout<<y<<" is gretest!!"<<endl;
	}
}

main()
{
	my_max<int>(10,100);
	my_max<char>('k','m');
}
