#include<iostream>
using namespace std;

class A{
    	private:
    		
	     	int a=10,b=20;
      	
		  
		friend fun2(A &obj);
   
};

fun2(A &obj)
{
	cout<<"value of A is:"<<obj.a<<endl;
	cout<<"value of B:"<<obj.b<<endl;
}

main()
{
	A obj;
	
	fun2(obj);
}

