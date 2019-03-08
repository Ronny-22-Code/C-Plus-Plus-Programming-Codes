//This program is to return the absolute difference between the elements of two array.

#include<iostream>

using namespace std;

int main()
{
	int a[10],b[10],i,j,n,m,k,d;
	
	
	cout<<"Enter the size of the first array:";
	
	cin>>n;
		
	cout<<"Enter the size of the second array:";
	
	cin>>m;
	
	cout<<"Enter the elements for the first array:";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}

	cout<<"Enter the elements of the second array:";
	
	for(j=0;j<m;j++)
	{
		
		cin>>b[j];
	}


	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			if((b[j]-a[i])== 1 || (b[j]-a[i]) < 1 )
			{
				
				 k = b[j];
				 d = a[i];
			}
			
		}
		
	}


cout<<k<<" "<<d;

return(0);

}
