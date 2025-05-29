/* Write a C program that accepts 10 integers from the user and stores them in an array. The 
program should then find and print the maximum and minimum values in the array. 
? Challenge: Extend the program to sort the array in ascending order. */

#include<stdio.h>
main()
{
      int num[10];
      int max,min,temp;
      int i,j;
      
      for(i=0;i<10;i++)
      {
      	printf("Enter no %d:",i+1);
      	scanf("%d",&num[i]);
      	printf("\n");
	  }
	  
	  min=num[0];
	  max=num[0];
	  
	  
	  for(i=0;i<10;i++)
	  {
	  	if(max<num[i])
	  	{
            max=num[i];		
		}
		
		if(min>num[i])
		{
			min=num[i];
		}
	  }
	  
	  printf("\nMaximum Number is:%d",max);
	  printf("\nMinimum Number is:%d",min);
	  
	  
	  for(i=0;i<10;i++)
	  {
	  	for(j=i+1;j<10;j++)
	  	{
	  	    if(num[j]<num[i])
			  {
			  	 temp=num[i];
			  	 num[i]=num[j];
			  	 num[j]=temp;
			  }	
		}
	  }
	  
	  
	  printf("\n\n----------Ascending Order-----------\n\n");
	  for(i=0;i<10;i++)
	  {
	  	printf("%d\n",num[i]);
	  }

	  
	   	
}
