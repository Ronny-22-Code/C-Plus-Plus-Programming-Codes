//This program is to provide the sum of multiple of 3 and 5.

#include<iostream>

using namespace std;

int main()

{
	
	int n,i,s=0;
	
	
	cout<<"Enter the value of n:";
	cin>>n;
	
	
	for(i=1;i<=n;i++)
	
	{
		if((i%3==0)||(i%5==0))
		{
		
		s=s+i;	
		
		}
	
	}
	
cout<<"The Sum of numbers is :"<<s;

return(0);	
	
}
