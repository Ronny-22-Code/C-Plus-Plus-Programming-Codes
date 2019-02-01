//This program is to count the number of digits in a number.

#include<iostream>

using namespace std;

int main()

{
	long g=0;
		
	int k=0;
	
	cout<<"Enter any number:";
	
	cin>>g;
	
	while(g!=0)
	
	{
		
		k++;
		
		g=g/10;		
		
	}
	
	cout<<"The number of digits in the entered number is:";
	
	cout<<k;
	
return(0);

}
