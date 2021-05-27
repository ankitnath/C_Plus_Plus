#include<iostream>

using namespace std;

class employee
{
	public:
		string name;
		string role;
		int id;
		employee(string x,string y,int z);
};

employee::employee(string x,string y,int z)
{
	name = x;
	role = y;
	id = z;
}

int main()
{
	employee obj1("Sathish","Manager",12);
        employee obj2("Ankit","Engineer",23);

	cout<<obj1.name<<" "<<obj1.role<<" "<<obj1.id<<"\n";
	cout<<obj2.name<<" "<<obj2.role<<" "<<obj2.id<<endl;
}
