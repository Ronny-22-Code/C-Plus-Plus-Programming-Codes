//This program is to check whether a string is a palindrome or not.

#include<iostream>
#include<string.h>
#include<process.h>
using namespace std;

int main()

{
	
	char a[10],b[10],c[10];
	int i,l=0;
	
	
	cout<<"Enter any string :";
	
	gets(a);
	
	strcpy(c,a);	
	
		
			strrev(a);		
			strcpy(b,a);
			
	
	
	
	if(strcmp(c,b)==0)
		{
			
			cout<<"The entered string is a palindrome:";
			
			
		}
		
		
		
		else
		
		{
			cout<<"The string is not a palindrome:";
			
		}
		
		
		
		

return(0);
}
