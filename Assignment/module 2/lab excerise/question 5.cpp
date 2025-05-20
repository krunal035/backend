/*  Write a C program to check if a number is even or odd using an if-else 
statement. Extend the program using a switch statement to display the month 
name based on the user’s input (1 for January, 2 for February, etc.). */

#include<stdio.h>
main()
{
	int num,month;
	
	printf("enter a number:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\n%d is a even number!",num);
	}
	else
	{
	    printf("\n%d is a odd number!",num);	
	}
	
	
	
	printf("\nenter month number:");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("\nJanuary!!");
		         break;
		case 2 : printf("\nfrebruary!!");
		         break;
        case 3 : printf("\nMarch!!");
		         break;
		case 4 : printf("\nApril!!");
		         break;
		case 5 : printf("\nMay!!");
		         break;
		case 6 : printf("\njune!!");
		         break;
		case 7 : printf("\njuly!!");
		         break;
		case 8 : printf("\nAugust!!");
		         break;
		case 9 : printf("\nseptember!!");
		         break;
		case 10 : printf("\noctomber!!");
		         break;
		case 11 : printf("\nNovember!!");
		         break;
		case 12 : printf("\nDecember!!");
		         break;
		default : printf("\ninvalid number");		 	          		 		 		 		 		 		 		 		          
				  		 				         
	}
}
