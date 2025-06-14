/* Write a C++ program that performs both implicit and explicit type conversions and 
prints the results. 
o Objective: Practice type casting in C++.*/

#include<iostream>
using namespace std;
main()
{
	int a=10;
	float b=a;  // int automatically converted to float
	
	
    cout<<"Implicit Type Conversion"<<endl;	
	cout<<"intger value:"<<a<<endl;
	cout<<"Converted to float:"<<b<<endl;
	
	float c=20.124;
	int d=int(c);  // Explicit Type Conversion
	
	cout<<"Explicit Type Conversion" << endl;	
	cout<<"float value:"<<c<<endl;
	cout<<"Converted to int:"<<d<<endl;
}
