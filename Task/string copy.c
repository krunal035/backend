#include<stdio.h>
main()
{
	char a[10];
	char b[10];
	char c[10];
	int i;
	
	printf("enter a string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	
	printf("\ncopied sting is:%s",b);
	
	strcpy(c,b);
	
	printf("\ncopied sting is:%s",c);
}
