//This program is to find the square of the even values in the array.

#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	int a[10],b[10],i,n,m,j;
	
	cout<<"Enter the size of the array elements:";
	
	cin>>n;
	
	m=n;
	
	cout<<"Enter the array elements:";
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];	
	
	}

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
	{
		b[j]  = sqrt(a[i]);
		
	}
}
	
	
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<m;j++)
	{
		
		if(((b[j]*b[j])==a[i]) &&(a[i] %2==0))	
		{
			
			cout<<a[i]<<" ";
			
			break;
		}

	}
}
	
	return(0);	
	
	}
  
  

