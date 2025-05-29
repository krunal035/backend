/* ? Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
function. 
? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
and recursive methods. Compare their efficiency. */

#include<stdio.h>

fibonacci(int n)
{
	int i,j,a=0,b=1,c;
	
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",a);
		
		c=a+b;
		a=b;
		b=c;
	}
}

nthfibonacci(int m)
{
	int i,a=0,b=1,c;
	for(i=0;i<m;i++)
	{
		
		
		c=a+b;
		a=b;
		b=c;
	}
	
	printf("\n%d",a);
}

main()
{
	int n,m;
	
	printf("Enter limit:");
	scanf("%d",&n);
	
	fibonacci(n);
	
	printf("Enter the nth no:");
	scanf("%d",&m);
	
	nthfibonacci(m);
	
}
