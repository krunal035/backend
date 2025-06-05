#include<iostream>
using namespace std;

class Factorial{
	public:
		fact(int n)
		{
			if(n==0)
			return 1;
			
			return n*fact(n-1);
		}
};


class Fibonacci{
	public:
		fibo(int n)
		{
			if(n<=1)
			 return n;
			 
			return fibo(n-1)+fibo(n-2); 
		}
};


class Hello{
	public:
		printhello(int n)
		{
			if(n==0)
			  return 0;
			  
			cout<<"Hello!!"<<endl;
			printhello(n-1);
		}
};


main()
{
   int k=1;
   
  
   while(k>=1 && k!=4)	
   {
   	  cout<<"press 1 for find factorial."<<endl;
      cout<<"press 2 for fibonacci program."<<endl;
	  cout<<"press 3 for print hello n time."<<endl;
	  cout<<"press 4 for exit."<<endl;
	   
	  int ch;
	  cout<<endl<<"Enter your choice:";
      cin>>ch;
	
	  cout<<endl;
	  	
		  
	   switch(ch)
	   {
		case 1 : Factorial f;
		         int n,ans;
		         cout<<"Enter Number:";
		         cin>>n;
		         ans=f.fact(n);
		         cout<<"Factorial of "<<n<<" is:"<<ans<<endl;
		         cout<<endl<<endl<<endl;
				 break;
		
		
		case 2 : Fibonacci fb;
		         int term,i;
				 cout<<"Enter number of terms:";
				 cin>>term;
				 cout << "Fibonacci Series: "<<endl;
				 
				 for(i=0;i<term;i++)
				 {
				 	cout<<fb.fibo(i)<<endl;
				 }
				 cout<<endl<<endl<<endl; 
				 break;
				 
		
		case 3 : Hello h;
		         int term1;
		         cout<<"Enter number of term:";
		         cin>>term1;
		         h.printhello(term1);
		         cout<<endl<<endl<<endl;
				 break;
		      
	    case 4 : cout<<endl<<"Thank you!!";
		         k=4;
				 break;
		         
		         
		         
		default : cout<<"Invalid choice!!"<<endl;
		          cout<<"Re Enter Your choice!!";
				  cout<<endl<<endl<<endl;		 		     
	}
  }
}
