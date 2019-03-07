//This program is to display  the numbers which are greater than the square of the smallest number.

#include<iostream>

using namespace std;

int main()
{
	
	int i,n,a[20],small;
	
	cout<<"Enter the size of the array:";
	cin>>n;
	
	
	cout<<"Enter the array elements:";
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		
	}
	
 	
	 small = a[0]; 
	 
	 for(i=0;i<n;i++)
 	{
 		
 		if(small>a[i])
 		{
 			
 			small = a[i];	
 			
		}
 		
	 }
 
 cout<<"The smallest of the lot is :"<<small;
 
 
 return(0);
 
 } 
