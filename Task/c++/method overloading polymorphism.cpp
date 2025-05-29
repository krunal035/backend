#include<iostream>
using namespace std;

class A{
	public:
		fun1(int a)
		{
			cout<<"A:"<<a<<endl;
		}
		fun1(char b[10])
		{
			cout<<"B:"<<b<<endl;
		}
		fun1(int a,int b)
		{
			cout<<"A+B:"<<a+b<<endl;
		}
		fun1()
		{
			cout<<"Thank you!!"<<endl;
		}
};


main()
{
	A obj;
	obj.fun1(10);
	obj.fun1("krunal");
	obj.fun1(10,20);
	obj.fun1();			
}


