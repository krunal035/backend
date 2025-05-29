/* Write a C program that takes a number as input and checks whether it is a palindrome using 
a function. 
? Challenge: Modify the program to check if a given string is a palindrome. */

#include<stdio.h>

palindrome(int n)
{
	int i,b,rem,rev=0,temp;
	
	temp=n;
	
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev = rev*10 + rem;
	}
	
	n=temp;
	
	if(n==rev)
	{
		printf("\n%d is a palindrome Number!!",n);
	}
	else
	{
		printf("\n%d is not a palindrome Number!!",n);
	}
}

stringpalindrome(char ch[])
{
	char temp[50];
	int len,i;
	len = strlen(ch);
	
	for(i=0;i<len;i++)
	{
		temp[i]=ch[len - i - 1];
	}
	
	temp[i]='\0';
	
	printf("\n%s",temp);
	
	if(strcmp(ch,temp)==0)
	{
		printf("\n%s is a palindrome string!!",ch);
	}
	else
	{
		printf("\n%s is not a palindrome string!!",ch);
	}
}

main()
{
	int n;
	char ch[50];
	printf("Enter no:");
	scanf("%d",&n);
	
	palindrome(n);
	
	printf("\nEnter String:");
	scanf("%s",&ch);
	
	stringpalindrome(ch);
}
