/* ? Write a C program that checks whether a given number is a prime number or not using a for 
loop. 
? Challenge: Modify the program to print all prime numbers between 1 and a given number. */

#include<stdio.h>
main()
{
	int n,i,j,count=0;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("\n\n%d is a Prime Number.!!",n);
	}
	else
	{
		printf("\n\n%d is not a Prime Number!!",n);
	}
	
     printf("\n\n---prime numbers between 1 to %d--------\n\n",n);
	 	
	for(j=3;j<=n;j++)
	{
		count = 0;
		for(i=1;i<=j;i++)
		{
		  if(j%i==0)
		  {
			  count++;
		  }
		}
		
		if(count==2)
	    {
		    printf("\n%d",j);
	    }
	    
	}
}
