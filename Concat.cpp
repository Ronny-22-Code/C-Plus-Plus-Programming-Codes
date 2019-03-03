//This program is to return the concatenation of the two strings.

#include<iostream>
#include<string.h>

using namespace std;

int concat(char[30],char[30]);

int main()

{
	char a[30],b[30];
	int i;
	
	cout<<"Enter the string:";
	
	gets(a);
	
	cout<<"Enter another string:";
	
	gets(b);
	
	
	concat(a,b);	

return(0);

}

int concat(char a[30] , char b[30] )

{
		
	strcpy(a,"Hello");
	strcpy(b,"World");
	
	cout<<strcat(a,b);
	
	return(0);			
	
}
