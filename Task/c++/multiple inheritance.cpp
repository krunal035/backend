#include<iostream>
using namespace std;

class A{
	public:
		fun1()
		{
			cout<<"Method 1!!"<<endl;
		}
};


class B{
	public:
		fun2()
		{
			cout<<"Method 2!!"<<endl;
		}
};

class C:public A,public B{
	       public:
	       	fun3()
		{
			cout<<"Method 3!!"<<endl;
		}
};

main()
{
	C obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
