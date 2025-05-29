#include<iostream>
using namespace std;

class A {
	protected:
		int a=10;
	public:
		fun1()
		{
			cout<<"A:"<<a<<endl;
		}
};

class B : public A{
	public:
		fun2()
		{
			cout<<"A:"<<a<<endl;
		}
};

class C: public A{
	public:
		fun3()
		{
			cout<<"A:"<<a<<endl;
		}
};


main()
{
	B obj;
	C obj1;
	obj.fun1();
	obj.fun2();
	
	obj1.fun1();
	obj1.fun3();
	
}


