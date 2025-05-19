#include<stdio.h>
main()
{
	int a,b; // data members
  
  printf("enter number 1:");
  scanf("%d",&a);

  printf("\n enter number 2:");
  scanf("%d",&b);
  
  a = a+b; // a=150 and b = 50
  b = a - b; // b= 100 and a =150
  a = a - b; // a = 50 and b = 100
  
    printf("\n after number 1 is :%d",a);
	printf("\n after number 2 is :%d",b);	
}
