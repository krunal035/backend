#include<stdio.h>
main()
{
	int a[5],i,sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
		printf("\n");
	}
	
	for(i=0;i<=4;i++)
	{
		printf("%d element is:%d",i+1,a[i]);
		printf("\n");
	}
	
	for(i=0;i<=4;i++)
	{
	    sum=sum+a[i];	
	}
	
	printf("\nsum of array is:%d",sum);
	
	
	
	
	
}
