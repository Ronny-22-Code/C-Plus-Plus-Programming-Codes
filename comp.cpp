// This program is to comapare the 3 numbers.

#include<iostream>

using namespace std;

int com(int,int,int);

int main()

{
	int a,b,c;
	
	cout<<"Enter the 3 numbers:";
	cin>>a>>b>>c;
	
	com(a,b,c);
	
	return(0);
	
}

int com(int a,int b,int c)

{
	
	if((a>b)&&(a>c))
	{
		cout<<"The first number is largest:"<<a;
	}	

	else if((b>c)&&(b>a))
	{
		
		cout<<"The second number is largest:"<<b;
	}
	
	else
	{
		cout<<"The third number is largest:"<<c;
		
	}	

}
