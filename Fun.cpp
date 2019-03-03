//This program is to return a value.

#include<iostream>
#include<math.h>

using namespace std;

int fun(int,int);

int main()

{
	int a=0,b=0;
	
	cout<<"Enter the value of base:";
	
	cin>>a;
	
	cout<<"Enter the value of mantissa";
	
	cin>>b;
	
	fun(a,b);	
	
return(0);

}

int fun(int a , int b )

{
		
	cout<<pow(a,b);
	return(0);
}	
	
