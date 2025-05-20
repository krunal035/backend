/* Write a C program that stores 5 integers in a one-dimensional array and prints 
them. Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements. */

#include<stdio.h>
main()
{
	int a[] = {10,20,30,40,50};
	int i;
	
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
	int b[3][3]={ {1,2,3},
	               {4,5,6},
	               {7,8,9}
	            };
	            
	int j,sum=0;
	
	printf("\n\n Two dimensional array!!\n\n");
	
	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
	  {
	      printf("[%d]",b[i][j]);
		  sum=sum+b[i][j];	
	  }	
	  printf("\n");
	}
	
	printf("\n sum of all 2dimensional array elments:%d",sum);            
}
