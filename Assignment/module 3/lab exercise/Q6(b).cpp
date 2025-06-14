/* Create a class BankAccount with data members like balance and member functions 
like deposit and withdraw. Implement encapsulation by keeping the data members 
private. */

#include<iostream>
using namespace std;


class Bank{
	private:
		double balance;
		
	public:
		
	Bank(int initialbalance=0)
	{
		if(initialbalance>0)
		{
			balance=initialbalance;
		}
		else
		{
			balance=0;
		}
	}
	
	
	deposit()
	{
		double de;
		
		cout<<"Enter  amount for deposit:";
		cin>>de;
		
		balance+=de;
		cout<<de<<" is deposited!!"<<endl;
	}
	
	withdraw()
	{
		double we;
		
		if(balance>0)
		{
			cout<<"Enter amount for withdraw:";
			cin>>we;
			
			if(we>balance)
			{
				cout<<endl<<"Insufficiant Balance!!"<<endl;
			}
			else
			{
				balance-=we;
				cout<<we<<" is withdrawl!!"<<endl;
			}
		}
	}
	
	
	~Bank()
	{
		cout<<endl<<"Your Balance Is:"<<balance;
	}
};

main()
{
	Bank b(1000);
	b.deposit();
	b.withdraw();
}
