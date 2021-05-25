#include "func.h"
#include<iostream>

using namespace std;

int main()
{
	float a,b;
	cout<<"Enter first num = ";
	cin>>a;
	cout<<"\n"<<endl;

	cout<<"Enter second num = ";
	cin>>b;
        cout<<"\n"<<endl;

	add(a,b);
	subtract(a,b);
	mul(a,b);
	div(a,b);
}
