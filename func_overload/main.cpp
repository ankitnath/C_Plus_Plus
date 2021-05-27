#include<iostream>
#include "func.h"

using namespace std;

int main()
{
	int x,y;
	float m;
	double n,o;

	cout<<"Enter the first int num : "<<endl;
	cin>>x;
	cout<<"\n";

        cout<<"Enter the second int num : "<<endl;
        cin>>y;
        cout<<"\n";

	cout<<"Enter the float value : "<<endl;
	cin>>m;
	cout<<"\n";

	cout<<"Enter the first double num : "<<endl;
        cin>>n;
        cout<<"\n";

        cout<<"Enter the second double num : "<<endl;
        cin>>o;
        cout<<"\n";

	plusFunc(x,y);
	plusFunc(m);
	plusFunc(n,o);
}

