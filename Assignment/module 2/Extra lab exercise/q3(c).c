/* Write a C program that takes an integer from the user and calculates the sum of its digits 
using a while loop. 
? Challenge: Extend the program to reverse the digits of the number. */

#include<stdio.h>
main()
{
	int n,temp,rem,sum=0,rev=0;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	temp = n;
	
	while(n>0)
	{
		rem = n%10;
		sum += rem;
		n = n/10;
		rev = rev * 10 + rem;		
	}
	
	n=temp;
	
	printf("\n\nSum of Digits of %d:%d",n,sum);
	printf("\nRevers of Number is:%d",rev);
	
	
	
	
}
