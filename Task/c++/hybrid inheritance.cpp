#include<iostream>
using namespace std;
 
class A {
	public:
		fun1()
		{
			cout<<"Method 1!!"<<endl;
		}
};


class B :public A{
	public:
		fun2()
		{
			cout<<"Method 2!!"<<endl;
		}
};


class C {
	public:
		fun3()
		{
			cout<<"Method 3!!"<<endl;
		}
};


class D :public B,public C{
	public:
		fun4()
		{
			cout<<"Method 4!!"<<endl;
		}
};

main()
{
	D obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
}
