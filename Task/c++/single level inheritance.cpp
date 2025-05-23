#include<iostream>
using namespace std;

class Student{
	        public:
	        	char name[50];
	        	int rollno;
	        	float marks;
	        	
	        	
	        	Student()
	         	{
				   cout<<"------Welcome to our website-------"<<endl;
				}
				
				detail()
				{
					cout<<"enter name:";
					cin>>name;
					cout<<"enter rollno:";
					cin>>rollno;
					cout<<"enter marks:";
					cin>>marks;
				}
				
				~Student()
				{
					cout<<endl<<"-----thank you-----!!"<<endl;
				}
};


class Result:public Student{
                        public:
                        	
                        	grade()
                        	{
                        		if(marks>90)
                        		{
                        			cout<<endl<<"grade A!!";
								}
								else if(marks>60 && marks<=90)
								{
									 cout<<"grade B!!";
								}
								else if(marks>40 && marks<=60)
								{
									cout<<"grade C!!";
								}
								else
								{
									cout<<"grade D!!";
								}
							}
                            	
                            	
			         	
	
};



main()
{
    Result r;
    r.detail();
    r.grade();
}
