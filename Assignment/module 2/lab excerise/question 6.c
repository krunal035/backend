/* Write a C program to print numbers from 1 to 10 using all three types of loops 
(while, for, do-while). */

#include<stdio.h>
main()
{
	int i,j=1,k=1;
	
	printf(" Using for loop!!\n");
	
	for(i=1;i<=10;i++)
	{
		printf("%d",i);
		printf("\n");
	}
	
	printf("\n\n Using while loop!!\n");
	
	while(j<=10)
	{
		printf("%d",j);
		printf("\n");
		j++;
	}
	
	printf("\n\n Using DO while loop!!\n");
	
	do
	{
		printf("%d",k);
		printf("\n");
		k++;
	}
	while(k<=10);
	
	
	
}
