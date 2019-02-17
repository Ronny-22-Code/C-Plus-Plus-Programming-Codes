//This program is to reverse a string.

#include<iostream>
#include<string.h>

using namespace std;

int main()

{
	
	char a[10];

	int i,l=0;
	
	
	cout<<"Enter any string:";
	
	gets(a);
	
	l=strlen(a);
	
	for(i=l-1;i>=0;i--)
	
	{
		
		cout<<a[i];
	}

return(0);

}
