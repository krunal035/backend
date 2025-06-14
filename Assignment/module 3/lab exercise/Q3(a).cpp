/*Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions. */

#include<iostream>
using namespace std;

class student{
	public:
		int marks;
		
	getmarks()
	{
		cout<<"Enter your marks:";
		cin>>marks;
	}
	
	calculategrade()
	{
		if(marks > 90 && marks <= 100)
		{
			cout<<"Grade A!!"<<endl;
		}
		else if(marks > 75 && marks <=90)
		{
			cout<<"Grade B!!"<<endl;
		}
		else if(marks > 60 && marks <=75)
		{
			cout<<"Grade C!!"<<endl;
		}
		else if(marks > 0 && marks <=60)
		{
			cout<<"Grade D!!"<<endl;
		}
		else
		{
			cout<<"Invalid marks!!"<<endl;
		}
	}
};

main()
{
	student s;
	s.getmarks();
	s.calculategrade();
}
