#include<iostream>

using namespace std;

int main()
{
	
	int a,b;
	
	cout<<"Enter the first variable"<<endl;
	
	cin>>a;
	
	cout<<"Enter the second variable"<<endl;
	
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"The variables after swapping are :"<<endl;

	cout<<"The value of first variable becomes:"<<a<<endl;
	
	cout<<"The value of second variable becomes:"<<b<<endl;


return(0);

}

