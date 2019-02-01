//This program is to print the odd and even numbers between 1 and 100.


#include<iostream>

using namespace std;


int main()

{
	
	int i;
	
	
	cout<<"The Even Numbers are:";
	
	for(i=1;i<101;i++)
	
	{
		
		if((i%2)==0)
		
		{
			
			cout<<i;
			cout<<"\n";	
		
		}
		
	}
	
	cout<<"The Odd Numbers are:";
	
	for(i=0;i<101;i++)
	{
		
		if((i%2)!=0)
		{
		
		cout<<i;
		cout<<"\n";
		
		}
	}
	
return(0);	


}
