#include<stdio.h>
main()
{
	char a[50];
	char b[50];
	int i,j=0;
	
	printf("Enter first name:");
	gets(a);
	printf("Enter Second name:");
	gets(b);
	
	
	
	for(i=0;a[i]!='\0';i++);
	
	

	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	
	a[i]='\0';
	printf("%s",a);
	
}
