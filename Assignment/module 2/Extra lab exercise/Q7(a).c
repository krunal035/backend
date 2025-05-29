#include<stdio.h>

power(int digit,int n)
{
	int result=1,i;
	
	for(i=0;i<n;i++)
	{
		result = digit*result;
	}
	return result;
}


armstrong(int num)
{
	int n=0,temp,sum=0,digit=0;
	
	temp = num;
	
	while(temp>0)
	{
		temp = temp/10;
		n++;
	}
	
	temp = num;
	
	while(temp>0)
	{
		digit = temp%10;
		sum += power(digit,n);
		temp = temp/10;
	}
	
	if(sum == num)
	{
		printf("\n%d is a armstrong number!!",num);
	}
	else
	{
	    printf("\n%d is not a armstrong number!!",num);	
	}
	
	
}
main()
{
     int num;
	 printf("enter Number:");
	 scanf("%d",&num);
	 
	 armstrong(num);	
}
