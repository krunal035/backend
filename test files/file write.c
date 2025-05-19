#include<stdio.h>
main()
{
	FILE *fptr;
	
	fptr = fopen("test1.txt","w");
	fprintf(fptr,"hello this is write method!!");
	fclose(fptr);
}
