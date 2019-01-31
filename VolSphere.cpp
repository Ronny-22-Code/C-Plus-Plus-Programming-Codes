//This program is to calculate the volume of the sphere.


#include<iostream>

using namespace std;

int main()

{
	
	int R=0;
	
	float V=0;
	
	cout<<"Enter the value of the radius of the sphere:";
	
	cin>>R;
	
	V=(4/3)*3.14*R*R*R;
	
	cout<<"The Volume of the Sphere after Calculation is :"<<V<<"\n";
	
	return(0);
	
}

