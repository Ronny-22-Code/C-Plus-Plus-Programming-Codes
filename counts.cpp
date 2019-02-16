//This program is to count the number of characters , digits and special characters.

#include<iostream>
#include<string.h>

using namespace std;

int main()

{
	
	int k=0,m=0,h=0,d=0,i,l=0,g=0;
	
	char a[30];
	
	cout<<"Enter the string :";
	
	gets(a);
	
	l= strlen(a);
	
	for(i=0;i<l;i++)
	
	{
		if((a[i]>=97)&&(a[i]<=122))
		{
			
			k++;
		}
		
		else if((a[i]>=65)&&(a[i]<=90))
		{
			
			m++;
			
		}
		
		else if ((a[i]<=48)&&(a[i]>=57))
	
		{
			
			h++;	
				
		}
	
		else
			if (a[i]==' ')			
		{
			
			d++;	
			
		}
	
		else
		{
			
			g++;
			
		}
		
		}
		
		cout<<"The number of digits are:"<<h<<"\n";
		cout<<"The number of small characters are:"<<k<<"\n";
		cout<<"The number of large characters are:"<<m<<"\n";
		cout<<"The number of special characters are:"<<g<<"\n";
		cout<<"The number of spaces are:"<<g<<"\n";
		
	return(0);	
}
