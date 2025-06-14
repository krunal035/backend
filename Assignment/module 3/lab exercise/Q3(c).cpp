/* Write a C++ program to display the multiplication table of a given number using a for 
loop. 
o Objective: Practice using loops.*/

#include<iostream>
using namespace std;

class Table{
	public:
		int i;
		
		Table()
		{
			cout<<"--------Multiplication Table--------"<<endl;
		}
		
	display(int n)
	{
		for(i=1;i<=10;i++)
		{
			cout<<n<<" * "<<i<<" = "<<n*i<<endl;
		}
	}
};

main()
{
	Table t;
	int n;
	
	cout<<"Enter number:";
	cin>>n;
	
	t.display(n);
	
}
