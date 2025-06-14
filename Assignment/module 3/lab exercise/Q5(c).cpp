/*Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards). */

#include<iostream>
using namespace std;
main()
{
	string str;
	string temp;
	int len,i;
	
	cout<<"enter string:";
	cin>>str;
	
	
	
	
	for(i=str.length()-1;i>=0;i--)
	{
		temp+=str[i];
	}
	
	temp[i]='\0';
	
	
	
	if(str==temp)
	{
		cout<<str<<" is a palindrome string!!"<<endl;
	}
	else
	{
		cout<<str<<" is not a palindrome string!!"<<endl;
	}
}
