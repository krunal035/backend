/* Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
resultant matrix. 
? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. */

#include<stdio.h>
main()
{
	int a[2][2],b[2][2],ans[2][2]={0};
	int a1[3][3],b1[3][3],ans1[3][3]={0};
	int i,j,k;
	
     printf("\n\n------For 2*2 Matrix------------\n\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    printf("Enter [%d][%d]:",i,j);
		    scanf("%d",&a[i][j]);
		    printf("\n");
		}
	
	}
	
	
	printf("\n\n------------First Matrix-----------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    printf("Enter [%d][%d]:",i,j);
		    scanf("%d",&b[i][j]);
		    printf("\n");
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    ans[i][j]=a[i][j] + b[i][j];
		}
	}
	
	printf("\n\n------------Resultant Matrix-----------\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    printf("\t%d",ans[i][j]);
		}
		printf("\n");
	}
	
	// taking number for first 3*3 matrix
	printf("\n\n------For 3*3 Matrix------------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("Enter [%d][%d]:",i,j);
		    scanf("%d",&a1[i][j]);
		    printf("\n");
		}
	}
	
	
	printf("\n\n------------First 3*3 Matrix-----------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("\t%d",a1[i][j]);
		}
		printf("\n");
	}
	
	
		// taking number for second 3*3 matrix
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("Enter [%d][%d]:",i,j);
		    scanf("%d",&b1[i][j]);
		    printf("\n");
		}
	}
	
	
	printf("\n\n------------First 3*3 Matrix-----------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("\t%d",b1[i][j]);
		}
		printf("\n");
	}
	
   //multiplication of 3*3 matrix	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				ans1[i][j] += a1[i][k] * b1[k][j]  ;
			}
		}
	}
	
	printf("\n\n------------Resultant 3*3 Matrix-----------\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("\t%d",ans1[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
}
