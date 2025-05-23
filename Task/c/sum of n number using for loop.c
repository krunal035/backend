#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("enter n number till you wanted to sum:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	
	printf("answer is:%d",sum);
}
