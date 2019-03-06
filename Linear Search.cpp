// This program is to perform a linear search.

#include<iostream>

using namespace std;

int main()

{
	int d,i,a[10],n;
	
	cout<<"Enter the size of the array elements : ";
	
	cin>>n;
	
	cout<<"Enter the array elements:";
	
	for(i=0;i<n;i++)
	
	{
		
		cin>>a[i];
		
	}
	
	cout<<"Enter the data to find in the search operation:";
	
	cin>>d;	
	
	for(i=0;i<n;i++)
	{
		
		if(d==a[i])
		{
				
			cout<<"The data is found ";
				
			cout<<d;
		
			break;	
		}	
			
		
		
		
		else
		{
			
			cout<<"The data is not found in the array";
			
		}
	
		continue;	


}

return(0);	

}	



