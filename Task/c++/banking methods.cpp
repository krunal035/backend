#include<iostream>
using namespace std;

class Bank{
	public:
		char name[50];
		long double mno;
		int balance = 0;
		int de,wi;
		
	 /*Bank()
	 {
	 	 cout<<"-----Welcome------"<<endl;
	 }*/	
	 
	 getdetail()
	 {
	 	cout<<"Enter name:";
	 	cin>>name;
	 	cout<<endl<<"Enter mobile number:";
	 	cin>>mno;
	 }
	 
	 opening()
	 {
	    int op;
		cout<<"Enter your opening Balance:";
	 	cin>>op;
	 	
	 	balance = op;
	 }
	 
	 deposit()
	 {
	 	cout<<endl<<"enter amount for deposit:";
	 	cin>>de;
	 	
	 	balance += de;
		cout<<endl<<de<<" is deposited."<<endl; 
	 }
	 
	 withdraw()
	 {
	 	if(balance>0)
	 	{
	 	   cout<<"Enter amount for withdraw:";
		   cin>>wi;
		   
		   if(wi>balance)
		   {
		       cout<<endl<<"Insufficiant Amount!!"<<endl;
			   int  mis=wi-balance;
			   cout<<"Missing Amount is:"<<mis<<endl;
		   }
		   else
		   {
		        balance = balance - wi;
		        cout<<endl<<wi<<" is withdrawl!!"<<endl;			
		   }	
		}
		else
		{
			cout<<"You can not withdrawl amount!!"<<endl;
			cout<<"You have zero balance!!"<<endl;
		}
	 }
	 
	 
	 check_bl()
	 {
	 	cout<<"Balance is:"<<balance<<endl;
	 }
	 
	/* ~Bank()
	 {
	 	cout<<"Thank You "<<name<<endl;
	 }
	*/	
};

main()
{
	int ch;
	cout<<"press 1 for Creat Account"<<endl;
	cout<<"press 2 for exit"<<endl;
	cout<<"Enter your Choice:";
	cin>>ch;
	
	Bank b;
	
	if(ch==1)
	{
		
		b.getdetail();
		b.opening();
		while(1)
		{
			cout<<endl<<endl<<endl;
			cout<<"Press 1 for Deposit"<<endl;
			cout<<"Press 2 for Withdraw"<<endl;
			cout<<"Press 3 for Check Balance"<<endl;
			cout<<"Press 4 for exit"<<endl;
			
			int ch1;
			cout<<"Enter your choice:";
			cin>>ch1;
			
			if(ch1==1)
			{
				b.deposit();
			}
			else if(ch1==2)
			{
				b.withdraw();
			}
			else if(ch1==3)
			{
				b.check_bl();
			}
			else if(ch1==4)
			{
				break;
			}
			else
			{
				cout<<"Invalid choice!!"<<endl;
			}
			
		}
	}
	else
	{
          	
		cout<<"thank you!!"<<endl;
	}
}
