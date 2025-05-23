#include<iostream>
using namespace std;

class Student{
	         public:
	         	
	         	char name[50];
				int rollno;
				float marks;
				 	         	
	         	Student()
	         	{
				   cout<<"------Welcome-------"<<endl;
				}
				
				detail()
				{
					cout<<"enter name:"<<endl;
					cin>>name;
					cout<<"enter rollno:"<<endl;
					cin>>rollno;
					cout<<"enter marks:"<<endl;
					cin>>marks;
				}
				
				~Student()
				{
					cout<<"thank you!!"<<endl;
				}
	
};

main()
{
	Student s;
	s.detail();
}
