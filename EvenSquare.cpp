//This program is to display the square of the even numbers.

#include<iostream>

using namespace std;

int main()
{
	
	int a[10],i,n;
	
	cout<<"Enter the number of elements:";
	
	cin>>n;
	
	cout<<"Enter the array elements";
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		
	}
	
	for(i=0;i<n;i++)
	{
		
		if((a[i]%2)==0)
		{
			
			cout<<a[i]*a[i]<<" ";
			
		}
		
	}

return(0);

}
