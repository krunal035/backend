/*  Write a C program that takes a string from the user and counts the number of vowels and 
consonants in the string. 
? Challenge: Extend the program to also count digits and special characters. */

#include<stdio.h>
main()
{
	char a[50];
	int vowels=0,constant=0,digit=0,special=0;
	int i;
	
	printf("Enter a string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i]=='A'  || a[i]=='E' || a[i]=='I'  || a[i]=='O' || a[i]=='U')
		{
			vowels++;
		}
		else if(a[i]=='a'  || a[i]=='e' || a[i]=='i'  || a[i]=='o' || a[i]=='u'  )
		{
			vowels++;
		}
		else if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			constant++;
		}
		else if(a[i] >= '0' && a[i] <='9')
		{
			digit++;
		}
		else if(a[i]!='\n' && a[i]!=' ')
		{
			special++;
		}
	}
	
	printf("\nVowels Are :%d",vowels);
	printf("\nConstant Are :%d",constant);
	printf("\nDigit Are :%d",digit);
	printf("\nSpecial Are :%d",special);	
}
