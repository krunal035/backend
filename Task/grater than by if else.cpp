#include<stdio.h>
main()
{
	int a,b;
	printf("enter num 1:");
	scanf("%d",&a);
	printf("\n enter num 2:");
    scanf("%d",&b);
	
	if( a > b)
	{
		printf("num1 is greater than num 2");
	}
	else if(a<b)
    {
    	printf("num2 is greater than num1");
	}
	else 
	{
		printf("both are equal");
	}
			
	
}
