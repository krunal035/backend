/* Write a C program that accepts two integers from the user and performs 
arithmetic, relational, and logical operations on them. Display the results.*/

#include<stdio.h>
main()
{
	int a,b;
	int sum,sub,multi;
	float divide;
	
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	
	// arithmetic
	
	sum = a+b;
	sub = a-b;
	multi = a*b;
	divide = a/b;
	
	printf("\n--- arithmetic Operations ---\n");
	printf("\nsum is:%d",sum);
	printf("\nsubtraction is:%d",sub);
	printf("\nmultiplication is:%d",multi);
	printf("\ndivison is:%f",divide);
	
	// relational
	
	printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    
    
    // logical
    
    printf("\n--- Logical Operations ---\n");
    printf("(a && b): %d\n", a && b);    // true if both are non-zero
    printf("(a || b): %d\n", a || b);    // true if either is non-zero
    printf("!(a): %d\n", !a);            // true if a is 0

	
	
	
	
}
