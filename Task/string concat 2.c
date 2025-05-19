#include<stdio.h>
main()
{
	char a[10];
	char b[10];
	int i,j;
	
	printf("enter first name:");
	gets(a);
    printf("\nenter second name:");
	gets(b);
	
	for(i=0;a[i]!='\0';i++);
	
	
	
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
	     i++;	
	}
	a[i]='\0';
	
	printf("concating name is:%s",a);
	
		
}
