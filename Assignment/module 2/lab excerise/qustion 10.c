/* Write a C program to demonstrate pointer usage. Use a pointer to modify the 
value of a variable and print the result. */

#include<stdio.h>
main()
{
	int a=10;
	int *ptr;
	
	
	printf("value of a is:%d",a);
	
	ptr=&a;
	
	*ptr = 20;
	
	printf("\n\n---after modify----");
	printf("\nvalue of a is:%d",a);
	
}
