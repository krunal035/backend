#include<iostream>
using namespace std;

class Prime{
	         public:
	         	
	         	int i,count=0;
				 	         	
	         	Prime()
	         	{
				   cout<<"------Welcome to Our Website-------"<<endl;
				}
				
				find(int n)
				{
				    for(i=1;i<=n;i++)
					{
						if(n%i==0)
						{
							count++;
						}
					}
					
					if(count==2)
					{
						cout<<n<<" is a Prime Number!!"<<endl;
					}
					else
					{
						cout<<n<<" is not a Prime Number!!"<<endl;

					}
						
				}
				
				~Prime()
				{
					cout<<endl<<"-----thank you!!------"<<endl;
				}
	
};

main()
{
	Prime p;
	int n;
	
	cout<<"Enter number:";
	cin>>n;
	
	p.find(n);
}
