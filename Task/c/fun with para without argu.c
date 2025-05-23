#include<stdio.h>

// function with parameter and without return type.


evenodd(int n)
{
	if (n%2==0)
	{
		printf("Even!!");
	}
	else
	{
		printf("odd!!");
	}
}


sum(int a,int b)
{
	printf("sum is:%d",a+b);
}

prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("\n%d is a prime number.",n);
	}
	else
	{
		printf("\n%d is not a prime number.",n);
	}
}

main()
{
	int n,a,b,k;
	
	printf("enter number for find even odd:");
	scanf("%d",&n);
	
	evenodd(n);
	
	printf("\nenter 2 number for find sum:");
	scanf("%d %d",&a,&b);
	
	sum(a,b);
	
	printf("\nenter number for find prime or not:");
	scanf("%d",&k);
	
	prime(k);
	
	
	
}
