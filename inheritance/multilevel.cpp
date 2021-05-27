#include<iostream>

using namespace std;

class Emp
{
	public:
		void myfunc()
		{
			cout<<"Multi-level inheritance \n";
		}
};

//Derived class --> child

class FirstChild: public Emp
{
	public:
		string flo = "First Child \n";
};

//Derived class --> grandchild

class SecondChild: public FirstChild
{
	public:
		string globe = "Second Child \n";
};

int main()
{
	SecondChild obj;
	obj.myfunc();
    //  obj.flo;	
	//obj.globe;

	cout<<"Stage 1 : "<<obj.flo<<"\n";
	cout<<"Stage 2 : "<<obj.globe<<"\n";
}
