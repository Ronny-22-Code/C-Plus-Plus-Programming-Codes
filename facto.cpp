//This program is to find the factors of a number .

#include<iostream>

using namespace std;


int main()
{
	
	int a,i;
	
	
	cout<<"Enter the number for which the factor is to be taken out:";
	cin>>a;
	
	
	for(i=1;i<=a;i++)
	{
	
		if(a%i==0)
		{
			
			cout<<"Factos:"<<i<<" ";
			
		}
		
		
	}


	
	
	
		
	return(0);
	
}


