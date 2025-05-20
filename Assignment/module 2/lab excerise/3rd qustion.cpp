/*Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values.*/


#include<stdio.h>
main()
{
	char name[10] = "krunal";   // Character variable
	int age = 22;            // Integer variable
	float per = 76.5;        // Float variable
	
	
	const float pi = 3.14159;
	
	
	printf("Name is :%s",name);
	printf("\nAge is :%d",age);
	printf("\nPercentage is :%f",per);
	printf("\nValue of pi is :%f",pi);
}
