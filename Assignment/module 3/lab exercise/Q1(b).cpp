/* Write a C++ program that accepts user input for their name and age and then 
displays a personalized greeting. */

#include<iostream>
using namespace std;
main()
{
	string name;
	int age;
	
	cout<<"enter name:";
	cin>>name;
	
	cout<<endl<<"enter age:";
	cin>>age;
	
	cout<<"Hello "<<name<<" you are "<<age<<" years old!!";
	
}
