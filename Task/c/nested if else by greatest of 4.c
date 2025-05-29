#include<stdio.h>
main()
{
	int n1,n2,n3,n4;
	
	printf("enter number 1 :");
	scanf("%d",&n1);
	
	printf("enter number 2 :");
	scanf("%d",&n2);
	
	printf("enter number 3 :");
	scanf("%d",&n3);
	
   	printf("enter number 4 :");
	scanf("%d",&n4); 	
	
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			if(n1>n4)
			{
				printf("%d is the greatest number.",n1);
			}
			else
			{
				printf("%d is the greatest number.",n4);
			}
		}
		else
		{
			if(n3>n4)
			{
			  printf("%d is the greatest number.",n3);	
			}
			else
			{
				printf("%d is the greatest number.",n4);
			}
		}
	}
	else
	{
		if(n2>n3)
		{
			if(n2>n4)
			{
				printf("%d is the greatest number.",n2);
			}
			else
			{
				printf("%d is the greatest number.",n4);
			}
		}
		else
		{
			if(n3>n4)
			{
				printf("%d is the greatest number.",n3);
			}
			else
			{
				printf("%d is the greatest number.",n4);
			}
		}
    }
    
}
