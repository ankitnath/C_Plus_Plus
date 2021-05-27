#include<iostream>
#include "func.h"

using namespace std;

int plusFunc(int x,int y)
{
	int sum = x + y;
	cout<<"sum of integer val = "<<sum<<"\n"<<endl;
}

float plusFunc(float x)
{
	float sum = (x + 2) * 2;
	cout<<"sum of float val = "<<sum<<"\n"<<endl;
}
double plusFunc(double x,double y)
{
	double sum = x + y;
	cout<<"sum of double val = "<<sum<<"\n"<<endl;
}

