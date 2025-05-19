#include<stdio.h>
findevenodd()
{
	int a;
	printf("enter number :");
	scanf("%d",&a);
	
	
	if(a%2==0)
	{
		printf("\nnumber is even!!");
	}
	else
	{
		printf("\nnumber is odd!!");
	}
}


primenumber()
{
	int a,i,count=0;
	printf("\nenter number:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("\n %d is a prime number!!",a);
	}
	else
	{
		printf("\n %d is not a prime number!!",a);
	}
}


rightanglepattern()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			printf("*");
		}
		printf("\n");
	}
}


main()
{
	while(1)
	{
		printf("\n press 1 for find even odd number.");
		printf("\n press 2 for prime number.");
		printf("\n press 3 for right angle pattern.");
		printf("\n press 4 exit.");
		
		int ch;
		printf("\nenter your choice:");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			findevenodd();
		}
	    else if(ch==2)
		{
			primenumber();
		}
		else if(ch==3)
		{
			rightanglepattern();
		}
		else if(ch==4)
		{
			printf("\n thank you!!");
			break;
		}
		else
		{
			printf("\n invalid choice!!");                        
			break;
		}
		
	}
}
