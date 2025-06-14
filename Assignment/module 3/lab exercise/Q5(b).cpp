/* Write a C++ program to perform matrix addition on two 2x2 matrices*/

#include<iostream>
using namespace std;
main()
{
	int a[2][2];
	int b[2][2];
	int add[2][2];
	int i,j;
	
	cout<<"Enter element for first matrix"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         	{                                                         // get elment for first matrix
		        cout<<"enter element a["<<i<<"]["<<j<<"]:";
		        cin>>a[i][j];
		        cout<<endl;
	        }
   }
   
   cout<<endl<<"------------first matrix----------"<<endl;
   
   for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         	{                                                         // show first matrix
         		cout<<"["<<a[i][j]<<"] ";
	        }
	    cout<<endl;
   }
   
  cout<<"Enter element for second matrix"<<endl; 
   
   for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         	{
		        cout<<"enter element:b["<<i<<"]["<<j<<"]:";             //get elment for second matrix
		        cin>>b[i][j];
		        cout<<endl;
	        }
   }
   
   cout<<endl<<"------------second matrix----------"<<endl;
   
   for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         	{
         		cout<<"["<<b[i][j]<<"] ";                              //show second matrix
	        }
	    cout<<endl;
   }
   
   
   
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
   	{
   	  add[i][j]=a[i][j]+b[i][j];	                                 //addition of two matrix
	}
   }
   
   cout<<endl<<"--------addition of matrix-------"<<endl;
   
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         	{
         		cout<<"["<<add[i][j]<<"] ";                        //show addition of matrix
	        }
	    cout<<endl;
   }
   
   
   
}
