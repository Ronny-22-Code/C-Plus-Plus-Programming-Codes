//This program is to replace the zeros by 5.

#include<iostream>
#include<string.h>

using namespace std;



int main()

{
	int i,l=0;
	
	char a[10];
	
	cout<<"Enter a number:";
	
	gets(a);
	
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		
		if(a[i]=='0')
		{
			
			a[i] = '5';
			
		}
		
		else
		{
			continue;
			
		}	
	
	}	
	
cout<<"The changed number is:";

puts(a);


return(0);	

}
