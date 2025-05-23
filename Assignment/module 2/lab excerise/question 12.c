/* Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them. */

#include<stdio.h>

struct student {
	             char name[50];
	             int rollno;
	             int marks;
               };
            

main()
{
   struct student s[3];
   int i;
   
   for(i=0;i<3;i++)
   {
   	 printf("\n----Enter Details for Student %d-----\n",i+1);
   	 
   	 printf("\nEnter Name:");
   	 scanf("%s",&s[i].name);
   	 
   	 printf("\nEnter Rollno:");
   	 scanf("%d",&s[i].rollno);
   	 
   	 printf("\nEnter Marks:");
   	 scanf("%d",&s[i].marks);
   	 
	 printf("\n\n");	 
   }
   
   
   for(i=0;i<3;i++)
   {
   	 printf("\n\n----%d Students-----\n",i+1);
   	 printf("\nName:%s",s[i].name);
   	 printf("\nRollno:%d",s[i].rollno);
   	 printf("\nMarks:%d",s[i].marks);
   }
}
