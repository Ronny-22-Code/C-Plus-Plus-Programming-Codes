//This program is to print the N natural numbers.


#include<iostream>

using namespace std;


int main()

{
	int i,n;
	
	
	cout<<"Enter the value of N upto which you want to get the numbers printed:";
	
	cin>>n;
	
	for(i=1;i<n;i++)
	{
		
		cout<<i<<"\n";
		
	}
	
	cout<<"The numbers in reverse order are:";

	for(i=n;i>=1;i--)
	{
		
		cout<<i<<"\n";
		
	}
	
return(0);
	
	
 } 



