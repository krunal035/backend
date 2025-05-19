#include<stdio.h>
main()
{
	FILE *fptr;
	
	fptr = fopen("test1.txt","a");
	fprintf(fptr,"\nhello this is append method!!");
	fclose(fptr);
}
