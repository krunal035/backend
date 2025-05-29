#include<stdio.h>
main()
{
	int i,ans,len=0;
	char ch[50];
	char b[50];
	char c[50];
	
	
	printf("enter a name:");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		len++;
	}
	
	printf("\nlength is:%d",len);
	printf("\nlength is:%d",strlen(ch));
	
	for(i=0;ch[i]!='\0';i++)
	{
		b[i]=ch[i];
	}
	b[i]='\0';
	
	printf("\n\ncopied string is:%s",b);
	printf("\ncopied string is:%s",strcpy(b,ch));
	
	
	
	printf("\n\nenter another name:");
	gets(c);
	
	
	ans=strcmp(ch,c);
	
	printf("\n%d",ans);
	
	if(ans==0)
	{
		printf("\n\nboth are same");
	}
	else
	{
				printf("\n\nboth are differnt.");

	}

	
}
