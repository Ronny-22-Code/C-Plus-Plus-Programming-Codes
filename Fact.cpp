//This program is to calculate the factorial of a number .

#include<iostream>


using namespace std;

int main()

{
	
	int a,i;
	
	float f=1;
	
	cout<<"Enter any number:";
	
	cin>>a;
	
	for(i=1;i<=a;i++)
	{
		
		f=f*i;
		
	}
		
	cout<<"The factorial of a number is :";
	
	cout<<f;

return(0);

}
