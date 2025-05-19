#include<stdio.h>
main()
{
	char a[10];
	int i,len=0;
	
	printf("enter a string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	
	printf("\nlength of string is:%d",len);
	
	
}
