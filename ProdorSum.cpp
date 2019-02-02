//This program gives the user the choice to calculate the sum or product.


#include<iostream>

using namespace std;


int main()

{
	int n,i,p=1,s=0;
	
	char a;
	
	cout<<"Enter the value of n:";
	
	cin>>n;
	
	cout<<"What do you want to do :";

	cout<<"Enter your choice:";
	
	cin>>a;	
	
	switch(a)
	
	{
		
		case 1: if(a=='S') 
				{
								
		
				for(i=0;i<n;i++)
				{
					
					s=s+i;	
					
				}	
		 
				}	
				cout<<"The sum is :";
				cout<<s;
		
			
		case 2:  
				(a =='P')	
			{
				
			for(i=0;i<n;i++)
				
				{
					
					p=p*i;		
					
				}
			}
			
			
			cout<<"The product is:";
			
			cout<<p;

		case 3: default : cout<<"Enter an appropriate choice:";

}


	
}			
