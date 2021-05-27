#include<iostream>

using namespace std;

class Vehicle
{
	public:
		string brand = "Ford";
	void honk()
	{
		cout<<"car is fantastic"<<endl;
	}
};

//Derived class

class Car: public Vehicle
{
	public:
		string model="Mustang";
};

int main()
{
	Car obj;
	obj.honk();
	cout<<obj.brand<<" "<<obj.model<<"\n";
}
