/* Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call. */

#include<stdio.h>

factorial(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("\n Factorial of %d is:%d",n,fact);
}

main()
{
	int n;
	printf("enter number:");
	scanf("%d",n);
	factorial(n);
}
