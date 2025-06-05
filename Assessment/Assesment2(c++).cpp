#include<iostream>
#include<cmath>
using namespace std;

const double costperhour = 18.50;
const double costperminute = 0.40;
const double costofdinner = 20.70;

class Event{
	public:
		string ename;
		string name;
		int nog;
		int nom;
		
		double totserver;
		double cost1,cost2;
		double oneservercost;
		double totalfoodcost;
		double averagecost;
		double totalcost;
		double deposit;
		
		getdetail()
		{
			cout<<"Enter name of the Event:";
		    cin.ignore();
			getline(cin,ename);
			cout<<endl<<"Enter Your Full Name:";
			getline(cin,name);
			cout<<endl<<"Enter No of Guests:";
			cin>>nog;
            cout<<endl<<"Enter No of Minutes in the Event:";
			cin>>nom;			
		}
		
		
		calculatecost()
		{
			totserver= ceil(nog/20.0);
			
			cost1=(nom/60)*costperhour;
			cost2=(nom % 60)*costperminute;
			oneservercost=cost1+cost2;
			
			totalfoodcost=nog*costofdinner;
			
			averagecost=totalfoodcost/nog;
			
			totalcost=(oneservercost*totserver)+totalfoodcost;
			
			deposit=totalcost*0.25;
		}
		
		display()
		{
			cout<<endl<<"--------------Event Estimate For:"<<name<<"-------------------"<<endl;
			cout<<"Number Of Servers:"<<totserver<<endl;
			cout<<"The Cost For Server is:"<<oneservercost<<endl;
			cout<<"The Cost For Food is:"<<totalfoodcost<<endl;
			cout<<"Average Cost For One Person is:"<<averagecost<<endl;
			cout<<"Total Cost of Event is:"<<totalcost<<endl;
			cout<<"Please Deposit the 25% of Amount To Reserve The Event!!"<<endl;
			cout<<"Amount For Deposit is:"<<ceil(deposit)<<endl; 
		}		
};

main()
{
	Event obj;
	obj.getdetail();
	obj.calculatecost();
	obj.display();
}
