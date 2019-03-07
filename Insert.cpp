//This program is to perform insertion in array.

#include<iostream>

using namespace std;

int main()

{
		int n,d,i,a[20],k,p;
		
		cout<<"Enter the size of the array elements:";
		
		cin>>n;
		
	
		cout<<"Enter the array elements:";
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			
		}	

		cout<<"Enter the data element to insert";
		
		cin>>d;
		
		a[n] = d;	
		
		
		

	cout<<"The array after successful insertion is :";
	
	for(i=0;i<n+1;i++)
	{
		
		cout<<a[i];
	
	}


return(0);

}


