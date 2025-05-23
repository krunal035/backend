#include<stdio.h>
main()
{
	while(1) // infinite loop
	{
		printf("\n press 1 for factorail number!!");
        printf("\n press 2 for sum of number!!");
		printf("\n press 3 for pattern!!");
		printf("\n press 4 for exit!!");
		
		int ch;
		printf("\nenter your choice:");
		scanf("%d",&ch);
		
		
		if(ch==1)
		{
			int n,fact=1,i;
			printf("\nenter number for factorial:");
			scanf("%d",&n);
			
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("%d",fact);
		}
		else if(ch==2)
		{
			int a,b,sum;
			
			printf("\nenter first number:");
			scanf("%d",&a);
			printf("\nenter second number:");
			scanf("%d",&b);
			
			sum=a+b;
			
			printf("\n answere is:%d",sum);
		}
		else if(ch==3)
		{
			int i,j,k;
			
			printf("\n\n");
			
			for(i=1;i<=5;i++)
			{
				for(k=1;k<=5-i;k++)
				{
					printf(" ");
				}
				for(j=1;j<=i;j++)
				{
					printf(" *");
				}
				printf("\n");
			}
		}
		else if(ch==4)
		{
			printf("\nThank You!!");
			break;
		}
		else
		{
			printf("Invalid choice!!");
			break;
		}
				
	}
}
