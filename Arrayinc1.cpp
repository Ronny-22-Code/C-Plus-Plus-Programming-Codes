//This program is to increase every seubsequent element by 1.

#include<iostream>

using namespace std;

int main()

{
	int a[10],i,n;
	
	
	cout<<"Enter the number of Array Elements: ";
	
	cin>>n;
	
	cout<<"Enter the Array Elements :";
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		
	}
	
	for(i=0;i<n;i++)
	{
		
		a[i]=a[i]+1;
		
	}
	
	cout<<"The Modified Array is:";
	
	for(i=0;i<n;i++)
	{
		
		cout<<a[i];
		
	}
	
	return(0);

}
