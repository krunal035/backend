#include<stdio.h>
main()
{
	FILE *fptr;
	int i;
	
	fptr = fopen("test1.txt","r");
	char a[200];
	
    while(fgets(a,200,fptr)!=NULL)
    {
    	printf("%s",a);
	}

	fclose(fptr);
	
	
	
	
}
