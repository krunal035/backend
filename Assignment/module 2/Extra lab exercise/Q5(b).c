/*Write a C program that calculates the factorial of a given number using a function. 
? Challenge: Implement both an iterative and a recursive version of the factorial function and 
compare their performance for large numbers.*/

#include<stdio.h>

factorial(int n)
{
	int i,ans,fact=1;
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	return fact;
}


main()
{
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	
	printf("\n%d",factorial(n));
}
