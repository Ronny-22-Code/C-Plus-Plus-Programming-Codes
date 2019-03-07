//This program is to return the square values of the array elements.

#include<iostream>

using namespace std;

int main()
{
	int a[10],i,n;
	
	cout<<"Enter the size of the array elements:";
	cin>>n;
		
	cout<<"Enter the array elements:";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
		
	}	
	
	for(i=0;i<n;i++)
	{
		
		cout<<a[i]*a[i]<<" ";
		
	}

return(0);

}
