//This program is to check substring .

#include<iostream>
#include<string.h>

using namespace std;

int main()

{
	char a[30],b[10];
	int i,j,l=0,k=0;
	
	
	cout<<"Enter any string:";
	
	gets(a);
	
	cout<<"Enter the substring to check in the main string:";
	
	gets(b);
	
	l=strlen(a);
	k=strlen(b);
	
		
			for(i=0;i<l-k;i++)
			{
				
				for(j=0;j<k-1;k++)
				{
				
					if(b[i+j]!=a[j])
					{
							
						
					cout<<"Sub-String found successfully!!!";				
					break;
				
				}
				
			
					if(j==i)
					{
					cout<<"Substring not found:";
					}
				}
			}	
	
return(0);		
	
	
}
