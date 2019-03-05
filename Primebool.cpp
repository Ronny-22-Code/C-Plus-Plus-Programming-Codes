// This program is to return a bool if number is prime or not.

#include<iostream>

using namespace std;

int Bool(int);

int main()

{
	int n;
	
	cout<<"Enter any number:";
	
	cin>>n;
	
	Bool(n);
	
	return(0);	
	
}

int Bool(int n)

{
	
	int i;
	
	bool b = true;
	
	for(i=2;i<n;i++)
	
	{
		
		if(n%i!=0)
		{
			
			cout<<b;	
			
			break;
		}
	
		else
		
		{
			cout<<"The number is composite";
				
			break;
		}
	
	}
	
}
