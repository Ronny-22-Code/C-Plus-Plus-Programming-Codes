// This program is to perform a series operation.

#include<iostream>

using namespace std;

int series(int,int);

int main()
{
	int n,m,i;
	
	cout<<"Enter the number upto which the values are to be printed:";
	
	cin>>n;
	
	
	cout<<"Enter another number:";
	
	cin>>m;
	
	
	
	for(i=1;i<=n;i++)	
	{
		
		int d = 3*i + 2;
		
		if((d)%m!=0)
		{
			
			cout<<d<<" ";
			
		}
		
		
	}

return(0);

}
