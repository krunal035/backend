/* Write a C program that takes an integer from the user and checks the following using 
different operators: 
o Whether the number is even or odd. 
o Whether the number is positive, negative, or zero. 
o Whether the number is a multiple of both 3 and 5. */

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	// Cheking Whether the number is even or odd. 
	
	if(num%2==0)
	{
		printf("\n\n%d is Even Number!!",num);
	}
	else
	{
		printf("\n\n%d is Odd Number!!",num);
	}
	
	// cheking Whether the number is positive,negetive or zero. 
	
	if(num>0)
	{
		printf("\n\n%d is positive Number!!",num);
	}
	else if(num<0)
	{
		printf("\n\n%d is negetive Number!!",num);
	}
	else
	{
		printf("\n\nIt is Zero Number!!");
	}
	
	// cheking Whether the number is multiple of both 3 and 5.
	
	
	if(num%3==0 && num%5==0)
	{
		printf("\n\n%d is multiple of both 3 and 5!!",num);
	}
	else
	{
		printf("\n\n%d is not multiple of both 3 and 5",num);
	}
	
	
	
}
