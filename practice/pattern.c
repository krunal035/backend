#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i-1;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
}
