#include<stdio.h>
main()
{
	int a[5],i,j,temp;
	
	for(i=0;i<=4;i++)
	{
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
		printf("\n");
	}
	
	
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
	

	
//	for(i=4;i>=0;i--)
//	{
//		printf("element are:%d",a[i]);
//		printf("\n");
//
//	}


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
		printf("\n");
	}
	
}
