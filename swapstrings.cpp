//This program is to swap two strings.

#include<iostream>
#include<string.h>

using namespace std;

int main()

{
	int i,l=0,k=0,j,h,g=0;
	
	char a[20],b[20],c[40];
	
	cout<<"Enter the string:";
	
	gets(a);
	
	cout<<"Enter another string:";
	
	gets(b);
	
	l=strlen(a);
	
	k=strlen(b);
	
	g=strlen(c);
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<k;j++)
		
		{
			for(h=0;h<g;h++)
			
			{
				c[h] = a[i];
				a[i] = b[j];
				b[j] = c[h];	
			
			}
				
		
		}
		
		
	}
	
	cout<<"The Strings after Swapping are:";
	
	cout<<"\n";
	
	puts(a);
	
	cout<<"\n";
	
	puts(b);
	
	return(0);
	
}
