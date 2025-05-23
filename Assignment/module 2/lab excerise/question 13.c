/* Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents. */

#include<stdio.h>
main()
{
	FILE *fptr;
	char a[200];
	
	fptr = fopen("testing 1.txt","w");
	fprintf(fptr,"Hello This is a normal test file!!");
	fclose(fptr);
	
	
	fptr = fopen("tesing 1.txt","r");
	fgets(a,200,fptr);
	printf("%s",a);
	fclose(fptr);
}
