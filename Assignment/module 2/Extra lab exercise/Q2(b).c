/*  Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
? Challenge: Solve the problem using both if-else and switch-case statements. */

#include<stdio.h>
main()
{
	int a,b,c,large,small;
	
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("\nEnter Second Number:");
	scanf("%d",&b);
	printf("\nEnter Third Number:");
	scanf("%d",&c);
	
	//using if-else and switch statement for find largest number
	
	if(a > b && a > c)
	{
		large = 1;	
	}
	else if(b > c)
	{
		large = 2;	
	}
	else
	{
		large = 3;	
	}
	
	
	switch(large)
	{
		case 1 : printf("\n\n%d is Largest Number!!",a);
		         break;
		case 2 : printf("\n\n%d is Largest Number!!",b);
		         break;
		case 3 : printf("\n\n%d is Largest Number!!",c);
		         break;       
	}
	
	//using if-else and switch statement for find smallest number
	
	if(a < b && a < c)
	{
		small = 1;	
	}
	else if(b < c)
	{
		small = 2;	
	}
	else
	{
		small = 3;	
	}
	
	
	switch(small)
	{
		case 1 : printf("\n\n%d is smallest Number!!",a);
		         break;
		case 2 : printf("\n\n%d is smallest Number!!",b);
		         break;
		case 3 : printf("\n\n%d is smallest Number!!",c);
		         break;       
	}
}
