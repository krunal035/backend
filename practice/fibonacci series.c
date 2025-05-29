#include<stdio.h>
main()
{
	int n,a=0,b=1,c;
	int i;
	
	printf("enter limit:");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
