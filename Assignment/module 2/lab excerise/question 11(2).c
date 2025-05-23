/*Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().*/

#include<stdio.h>
main()
{
	char a[10],b[10];
	
	printf("Enter first Name:");
	gets(a);
	printf("\nEnter second Name:");
	gets(b);
	
	strcat(a,b);
	
	printf("\nconcating name is:%s",a);
	printf("\nLength of concating name is:%d",strlen(a));


}
