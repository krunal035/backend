#include<stdio.h>
main()
{
	char a[20];
	char b[20];
	
	printf("Enter string 1 : ");
	gets(a);
	printf("enter string 2 :");
	gets(b);
	
	int result = strcmp(a,b);
	
	printf("\n%d",result);
}
