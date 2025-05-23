/* Write a C program that takes the marks of a student as input and displays the corresponding 
grade based on the following conditions: 
o Marks > 90: Grade A 
o Marks > 75 and <= 90: Grade B 
o Marks > 50 and <= 75: Grade C 
o Marks <= 50: Grade D 
? Use if-else or switch statements for the decision-making process. */

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter your marks:");
	scanf("%d",&num);
	
	if(num > 90)
	{
		printf("\n\nExcellent,You have Grade A!!");
	}
	else if(num > 75 && num<=90)
	{
	    printf("\n\nGood,You have Grade B!!");
	}
	else if(num > 50 && num <=75)
	{
		printf("\n\nNot bad,You have Grade C!!");
	}
	else
	{
		printf("\n\nYou have to do more practice,You have Grade D!!");
	}
}
