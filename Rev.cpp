//This program is to display the array in reverse order.

#include<iostream>

using namespace std;

int main()

{
	int i, a[10],n;
	
	cout<<"Enter the size of the array:";
	
	cin>>n;
	
	cout<<"Enter the array elements:";
	
	for(i=0;i<n;i++)
	
	{
		
		cin>>a[i];	
	
	}
	
	
	cout<<"The array in the reversed manner is:";
	
	for(i=n-1;i>=0;i--)
	{
		
		cout<<a[i]<<" ";
			
	}	
	
return(0);


}
