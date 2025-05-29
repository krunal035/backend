/*  Write a C program that takes a string as input and reverses it using a function. 
? Challenge: Write the program without using built-in string handling functions.  */

#include<stdio.h>
main()
{
	char a[50];
	
	printf("Enter String:");
	scanf("%s",&a);
	
	reverse(a);
	
}

reverse(char a[50])
{
	int len=0,i;
	char b[50];
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	
	
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[len -i -1];
	}
	
	printf("\nReversed String:%s",b);
	
	
}
