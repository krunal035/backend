#include<stdio.h>
main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	
	if (age>100)
	{
		printf("invalid age!!");
	}
	else if(age >= 18)
	{
		printf("age is eligble");
	}
	else
	{
		printf("age is not eligble.");
	}
}
