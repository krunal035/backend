#include<stdio.h>
main()
{
	int i,n,fact=1;
	
	printf("enter the number for  factorial:");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		fact=fact*i;
	}
	
		printf("%d\n",fact);
}
