#include<iostream>

using namespace std;

class Mul
{
	public:
		void func()
		{
			cout<<"Multiple inheritance\n"<<endl;
		}
};

class First
{
	public:
		void fun_ch()
		{
			cout<<"First Inherited Child Class\n"<<endl;
		}
};

class Second : public First, public Mul
{
	public:
		void fun_sh()
		{
			cout<<"Base class inheriting other class\n"<<endl;
		}
};

int main()
{
	Second obj;
	obj.func();
	obj.fun_ch();
	obj.fun_sh();
}
