#include<iostream>
using namespace std;

class A{
	private:
		int a=10,b=20;
		
		
	friend class B;
};

class B{
	public:
		myfun(A &obj)
		{
			cout<<"value of A:"<<obj.a<<endl;
			cout<<"value of B:"<<obj.b<<endl;
		}
};

main()
{
	A obj;
	B obj1;
	obj1.myfun(obj);
}
