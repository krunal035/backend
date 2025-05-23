/* Write a C program that acts as a simple calculator. The program should take two numbers 
and an operator as input from the user and perform the respective operation (addition, 
subtraction, multiplication, division, or modulus) using operators. 
Challenge: Extend the program to handle invalid operator inputs. */

#include<stdio.h>
main()
{
	int num1,num2;
	char op;
	
	printf("Eneter number 1:");
	scanf("%d",&num1);
	
	
	
	printf("\nEnter number 2:");
	scanf("%d",&num2);
	
	printf("\n\nPress + for addition!!");
	printf("\nPress - for substraction!!");
	printf("\nPress * for multiplication!!");
	printf("\nPress / for division!!");
    printf("\nPress '%' for find remender!!");
	
	printf("\nEnter your operator:");
	scanf(" %c",&op);  
		
	
	
	printf("\n\n");
	
	switch(op)
	{
		case '+' :printf("Addition is:%d",num1+num2);
		         break;
		case '-' :  printf("Substraction is:%d",num1-num2);
		         break;
		case '*' : printf("multiplication is:%d",num1*num2);
		         break;
		case '/' : printf("division is:%d",num1/num2);
		         break;
		case '%' : printf("Remender is:%d",num1%num2);
		         break;	
		default :printf("it is invalid choice!! please enter no between 1 to 5");
		         break;
		         
	}

}
