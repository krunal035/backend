#include<stdio.h>

factorial()
{
	int a,fact=1,i;
	
	printf("enter number for find factorial:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	
	return fact;
}

sum()
{
	int a,b;
	
	printf("\nenter 2 number for find sum:");
	scanf("%d %d",&a,&b);
	
	return a+b;
}


main()
{
	printf("\n%d",factorial());
	printf("\n%d",sum());
}
