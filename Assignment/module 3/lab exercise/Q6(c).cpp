/*  Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. */

#include<iostream>
using namespace std;

class Person{
	public:
		char name[50];
		int age;
		
		getdetail()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Age:";
			cin>>age;
		}
		
		showdetail()
		{
			cout<<endl<<"Name is:"<<name;
			cout<<endl<<"Age is:"<<age;
		}
};


class Student:public Person{
	public:
		char course[50];
		int rollno;
		
	getdetail1()
	{
		getdetail();
		cout<<endl<<"Enter Course Name:";
		cin>>course;
		cout<<"Enter your roll no:";
		cin>>rollno;
	}
	
	
	showdetail1()
	{
		cout<<"--------student---------";
		showdetail();
		cout<<endl<<"Your Course is:"<<course<<endl;
		cout<<"Your Rollno is:"<<rollno<<endl;
	}
};


class  Teacher:public Person{
	public:
		char subject[50];
		int salary;
		
		getdetail2()
		{
			getdetail();
			cout<<"Enter Your Subjet:";
			cin>>subject;
			cout<<"Enter Your salary:";
			cin>>salary;
		}
		
		showdetail2()
		{
			cout<<"------------Teacher-----------";
			showdetail();
			cout<<endl<<"Your Subject is:"<<subject<<endl;
			cout<<"Your salary is:"<<salary<<endl;
		}
};

main()
{
	Student s;
	Teacher t;
	
	s.getdetail1();
	s.showdetail1();
	
	t.getdetail2();
	t.showdetail2();
}
