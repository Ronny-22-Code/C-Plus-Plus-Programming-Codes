//This program is to insert a data element at a particular index.

#include<iostream>

using namespace std;

int main()
{
	
	int a[20],i,n,p,d;
	
	cout<<"Enter the number of data elements :";
	
	cin>>n;
	
	cout<<"Enter the array elements:";
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		
	}
	
	cout<<"Enter the position at which insertion is to take place:";
	
	cin>>p;
	
	cout<<"Enter the data element for insertion:";
	
	cin>>d;
	
	 for (i = n - 1; i >= p - 1; i--)
      {
	  
	  a[i+1] = a[i];
		
	}
   
   a[p-1] = d;
	
	
	
	cout<<"Modified array is:";
	
	for(i=0;i<n;i++)
	{
	
		cout<<a[i];
	}	
		
			
	
return(0);		


}
