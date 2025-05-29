/*  Write a C program that takes N numbers from the user and stores them in an array. The 
program should then calculate and display the sum of all array elements. 
? Challenge: Modify the program to also find the average of the numbers. */

#include<stdio.h>
main()
{
	int n,i,sum=0;
	float avg;
	
	printf("Enter the Limit:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter no %d:",i+1);
		scanf("%d",&a[i]);
		printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nSum of all element is:%d",sum);
	
	
	avg = (float)sum/n;
	
	printf("\nAverage of all element is:%f",avg);
}
