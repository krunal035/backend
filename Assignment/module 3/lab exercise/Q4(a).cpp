/*o Write a C++ program that defines functions for basic arithmetic operations (add, 
subtract, multiply, divide). The main function should call these based on user input.*/

#include<iostream>
using namespace std;

add(int a,int b)
{
	return a+b;
}

substraction(int a,int b)
{
	return a-b;
}

multiplication(int a,int b)
{
	return a*b;
}

division(int a,int b)
{
	float ans=(float)a/(float)b;
	return ans;
}

main()
{
	int num1,num2;
	cout<<"enter number 1:";
	cin>>num1;
	
	cout<<"enter number 2:";
	cin>>num2;
	
	cout<<endl<<"Addition is:"<<add(num1,num2)<<endl;	
	cout<<endl<<"Substraction is:"<<substraction(num1,num2)<<endl;
	cout<<endl<<"Multiplication is:"<<multiplication(num1,num2)<<endl;
	cout<<endl<<"division is:"<<division(num1,num2)<<endl;
}
