#include<stdio.h>

factorial(int a)
{
	int fact=1,i;
		
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	
	return fact;
}


sum(int a,int b)
{
  return a+b;
}

main()
{
	int n;
	printf("enter number for find factorial:");
	scanf("%d",&n);
	
	
	printf("\n%d",factorial(n));
	
	int a,b; 
	
	printf("\nenter 2 number for find sum:");
	scanf("%d %d",&a,&b);
	
	
	
	printf("\n%d",sum(a,b));
}
