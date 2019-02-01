//This program is to check whether a number is prime or not.


#include<iostream>

using namespace std;


int main()

{
	
	int r=0,i;
	
	
	cout<<"Enter any number :";
	
	cin>>r;
	
	
	for(i=2;i<r;i++)
	
	{
	
		if(r%i==0)
		{
			
			cout<<"The Number is Composite";
			
		}
		
	
		
		else

		{
			
			cout<<"The Number is Prime";
			
		}
	
		break;
	
	}
	
	return(0);
	
	}
	
	
