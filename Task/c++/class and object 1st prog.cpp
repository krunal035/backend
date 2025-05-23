#include<iostream>
using namespace std;

class Myclass{
      public:
	          int a,b;
			  myfunction1()
			  {
			     cout<<"Enter A:";
				 cin>>a;
				 cout<<"Enter B:";
				 cin>>b;
				 
				 cout<<"Addition : "<<a+b<<endl;	
			  }	
			   myfunction2()
			  {
			     cout<<"Enter A:";
				 cin>>a;
				 cout<<"Enter B:";
				 cin>>b;
				 
				 cout<<"Substraction : "<<a-b<<endl;	
			  }	
			   myfunction3()
			  {
			     cout<<"Enter A:";
				 cin>>a;
				 cout<<"Enter B:";
				 cin>>b;
				 
				 cout<<"Multiplication : "<<a*b<<endl;	
			  }	
	
};


main()
{
	Myclass obj1;
	obj1.myfunction1();
	obj1.myfunction2();
	obj1.myfunction3();
}
