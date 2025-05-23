#include<stdio.h>
main()
{
  int a,b,temp; // data members
  
  printf("enter number 1:");
  scanf("%d",&a);

  printf("\n enter number 2:");
  scanf("%d",&b);
   
   
   temp=a; // temp = 100 and a=blanck
   a=b; // a = 50 and b=blanck
   b=temp; // b=100 and temp=blanck
   
    printf("\n after number 1 is :%d",a);
	printf("\n after number 2 is :%d",b);	
}
