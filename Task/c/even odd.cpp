#include<stdio.h>
main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	
	if(num == 0)
	{
		printf("number is zero.");
	}
	else if(num %2 == 0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	
	
}
