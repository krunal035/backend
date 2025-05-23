#include<stdio.h>
main()
{
	int i,a[5];
	
	for(i=0;i<=4;i++)
	{
		printf("\nenter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	
	while(1)
	{
		printf("\npress 1 for ascending order array");
		printf("\npress 2 for descending order array");
		printf("\npress 3 for sum of array");
		printf("\npress 4 for exit");
		printf("\nenter your choice:");
		
		int ch;
		scanf("%d",&ch);
		
		if(ch==1)
		{	
		   int i,j,temp;
		 printf("\n asscending order");
        	for(i=0;i<=4;i++)
 	        {
		     for(j=i+1;j<=4;j++)
		      {
			   if(a[i]>a[j])
			    {
				 temp=a[i];
				 a[i]=a[j];
				 a[j]=temp;
			    }
		      }
	         }      
	
	
	
	     	for(i=0;i<=4;i++)
        	{
	        	printf("\n%d element:%d",i+1,a[i]);
		
        	}
			
		  }
		 else if(ch==2)
		 {
		 	int i,j,temp;
              for(i=0;i<=4;i++)
	           {
                for(j=i+1;j<=4;j++)
		         {
		          if(a[i]<a[j])
		        	{
			         temp=a[i];
			         a[i]=a[j];
			         a[j]=temp;	
		        	} 	
	             }	 
	           }	
	
	          printf("\ndescending oreder");
	
	     	for(i=0;i<=4;i++)
          	{
	        	printf("\n%d element:%d",i+1,a[i]);
	        }		 
		 }
		else if(ch==3)
		{
			int i,sum=0;
		   for(i=0;i<=4;i++)
        	{
	         sum=sum+a[i];	
	        }
	
        	 printf("\nsum of array is:%d",sum);	
		} 
		else if(ch==4)
		{
			printf("\nthank you!!");
			break;
		}
		else
		{
			printf("\ninvalid choice!!");
		}
		    
		
	}
}

