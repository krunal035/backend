/* ? Write a program to make multiplication of 2-D Matrix */

#include<stdio.h>
main()
{
	int a[2][2],b[2][2],ans[2][2];   // 2 dimensional array declaration
	int i,j;
	
	printf("-------MATRIX 1------");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter elment a[%d][%d]:",i+1,j+1);    // taking numbers from user for 1st matrix
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("  %d  ",a[i][j]);   // printing first matrix
		}
		printf("\n");
	}
	
	printf("\n\n\n------MATRIX 2------");

	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter elment b[%d][%d]:",i+1,j+1);   // taking numbers from user for 2nd matrix
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("  %d  ",b[i][j]);   // printing second matrix
		}
		printf("\n");
	}
	
	printf("\n\n\n-------MULTIPLICATION MATRIX------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ans[i][j] = a[i][j] * b[i][j];
		}
	}
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("  %d  ",ans[i][j]);   // printing multiplication array
		}
		printf("\n");
	}
	
	
	
	
	
}
