/*  Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. 
? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/

#include<stdio.h>
main()
{
	int n,i,range;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	printf("\nEnter Range:");
	scanf("%d",&range);
	
	printf("\n\n------Multiplication Table of %d-------\n\n",n);
	
	for(i=1;i<=range;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
	
	
	
}
