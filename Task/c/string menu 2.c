#include<stdio.h>
#include<string.h>
main()
{
	
	
	while(1)
	{
		printf("\npress 1 for find string length: ");
        printf("\npress 2 for string copy: ");
		printf("\npress 3 for string comparison: ");
		printf("\npress 4 for exit. ");
		
		int ch;
		fflush(stdin);
		printf("\nenter your choice:");
		scanf("%d",&ch);
		
		if(ch==1)
		{
		    char a[10];
			
			fflush(stdin);
			printf("\n enter a string:");
			gets(a);
			
			int i;
			int len=0;
			
			for(i=0;a[i]!='\0';i++)
			{
			   len++;	
			}
			
			printf("\nlength of string is:%d",len);	
		}
		else if(ch==2)
		{
		    char a[10];
			char b[10];
			
			fflush(stdin);
			printf("\nenter first string:");
			gets(a);
			
			
			int i;
			for(i=0;a[i]!='\0';i++)
			{
				b[i]=a[i];
			}
			b[i]='\0';
			
			printf("\ncopied string is:%s",b);
				
		}
		else if(ch==3)
		{
		      char a[10];
			  char b[10];
			  
			  
			  printf("\nenter first string:");
			  gets(a);
			  printf("\nenter second string:");
			  gets(b);	
			  
			  int result = strcmp(a,b);
			  
			  if(result==1)
			  {
			  	printf("\nfirst string is bigger.");
			  }
			  else if(result==0)
			  {
			  	printf("\nsecond string is bigger.");
			  }
			  else
			  {
			  	printf("\nboth are same");
			  }
		}
		else if(ch==4)
		{
		     printf("\nthank you!!");
			 break;	
		}
		else
		{
			 printf("\ninvalid choice!");
			 break;
		}		
		
	}
}
