#include<iostream>

using namespace std;

int main()

{
	int a[20],i,n,t=0;
	
	
	cout<<"Enter the data elements in the array:";
	
	
	for(i=0;i<n;i++)
	
	{
		
		cin>>a[i];
		
		
	}
	
	
	
	for (i=0;i<n;i++)
	
	{
		
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		
		
	}
	
	cout<<"The data elements after the swap of adjacent elements of the array:";
	
	for(i=0;i<n;i++)
	
	{
		cout<<a[i];
		
	}
	
	return(0);
	
}
