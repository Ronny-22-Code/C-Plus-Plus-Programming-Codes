// This program is to implement the class Stack.

#include<iostream>

using namespace std;

class Stack
{
	
	int top;
	
	public:
		
			Stack(int);
			int Push();
			int Pop(int);
			int Display(int stack[30],int);
};

int Stack::Push()
{
	
	int i,stack[30],n,k;
	
	cout<<"Enter the number of elements to push in the stack:";
	
	cin>>n;
	
	cout<<"Enter the elements to push in the stack";
	
	for(i=0;i<n;i++)
	{
		cin>>stack[i];
			
	}
	
	k=stack[0];

return(0);	

} 

Stack::Stack(int k)
{
	
	top=k;
	
}


int Stack::Pop(int k)
{
	
	cout<<"The popped element is : ";
	
	cout<<k;
	
return(0);

}



int Stack::Display(int stack[30],int n)

{
	int i;
	
	cout<<"The stack elements are:";
	
	for(i=0;i<n;i++)
	{
		
		cout<<stack[i]<<" ";
	}	
	
return(0);

}


int main()
{
	
	int n,stack[30],top,k;
	
	
	
	Stack S(k);
	
	
	S.Push();
	S.Pop(stack[0]);
	S.Display(stack,n);
		
return(0);	

}

