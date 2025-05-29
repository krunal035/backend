#include<iostream>
using namespace std;

class A{
	public:
		fun1()
		{
			cout<<"method 1!!"<<endl;
		}
};

class B{
	public:
		fun1()
		{
			cout<<"method 2!!"<<endl;
		}
};

class C:public A,public B{
	public:
		fun1()
		{
			A::fun1();
			B::fun1();
			cout<<"method 3!!"<<endl;
		}
};

main()
{
	C obj;
	obj.fun1();
}
