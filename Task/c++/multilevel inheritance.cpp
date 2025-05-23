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
                        	    int ans;
                        	grade()
                        	{
                        		if(marks>90)
                        		{
                        			ans = 1;
								}
								else if(marks>60 && marks<=90)
								{
									 ans =2;
								}
								else if(marks>40 && marks<=60)
								{
									ans = 3;
								}
								else
								{
									ans = 4;
								}
							}
                            	
};

class Print:public Result{
	                    public:
	                    	
	                    	show()
	                    	{
	                    		if(ans=1)
	                    		{
	                    			cout<<"Grade A!!";
								}
								else if(ans=2)
								{
									cout<<"Grade b!!";
								}
								else if(ans=3)
								{
									cout<<"Grade c!!";
								}
								else
								{
									cout<<"Grade D!!";
								}
							}
	   
};



main()
{
    Print p;
    p.detail();
    p.grade();
    p.show();
}
