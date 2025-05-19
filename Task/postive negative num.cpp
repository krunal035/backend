#include<stdio.h>
main()
{
	int num1;
	
	printf("enter number:");
	scanf("%d",&num1);
	
	if(num1 == 0)
	{
		printf("%d is a zero.",num1);
	}
	else if(num1 > 0)
	{
		printf("%d is a positive number.",num1);
	}
	else 
	{
		printf("%d is a negetive number.",num1);
	}
	
}
