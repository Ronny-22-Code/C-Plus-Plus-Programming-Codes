//This program is to print the fibonacci series upto the number of terms.

#include<iostream>

using namespace std;

int main()

{
	int a=0,b=1,s=0,i,n;

	cout<<"Enter the number of terms upto which the fibonacci series is to be printed ";
	
	cin>>n;
	
	cout<<"The Fibonacci series is as follows:";
	
	for(i=1;i<=n;i++)
	{
		
		cout<<a;
		s=a+b;
		a=b;
		b=s;
	
	}
	
	return(0);

}

