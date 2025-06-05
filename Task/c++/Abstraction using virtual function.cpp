// abstraction : Data hiding

#include<iostream>
using namespace std;

class Employer{
	public:
		virtual salary()=0; // pure virtual function
};


class Dev:public Employer{
	public:
		salary()
		{
			cout<<"Dev salary is 10000!!"<<endl;
		}
};

class Baljeet:public Employer{
	public:
		salary()
		{
			cout<<"Baljeet salary is 30000!!"<<endl;
		}
};

main()
{
	Dev d;
	d.salary();
	
	Baljeet b;
	b.salary();
}


