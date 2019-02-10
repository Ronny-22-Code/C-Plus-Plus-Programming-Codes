//This program is to find the LCM of the two numbers.

#include<iostream>

using namespace std;

int main()

{
	int a=0,b=0,t=0;
	
	
	cout<<"Enter the two numbers of which you want to find the LCM :";
	
	cin>>a>>b;
	
	
	while(1)
	{
		
		if(a>b)
		{
			
			t=a;	
			
		}	
		
		else
		
		{
			
			t=b;			
			
		}
		
		if((t%a==0)&&(t%b==0))
		
		{
				
			cout<<"The LCM of the entered numbers is:";
			
			cout<<t;	
			
		}
		
		else
		
		{
			t=a*b;
			
			cout<<"The LCM of the entered numbers is:";
			
			cout<<t;
		
		}
		
		
		
		t++;
		
		return(0);
		
	}	
		
	
	
	
}
