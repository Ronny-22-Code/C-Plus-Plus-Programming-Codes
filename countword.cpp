// This program is to count the number of words in the string.

#include<iostream>
#include<string.h>

using namespace std;

int count(char[30]);

int main()
{
	
	char a[30];
	
	cout<<"Enter any string ";
	
	gets(a);
	
	count(a);
	
return(0);	
	
}
	
	int count(char a[30])
	{
	
		int l=0,i,k=0;
	
	l = strlen(a);
	
	
	for(i=0;i<l-1;i++)
	
	{
		
		if(a[i]==' ')
		{
		
			k=k+1;	
		
		}
		
	}

	cout<<"The total number of words are:"<<k;


	
}
