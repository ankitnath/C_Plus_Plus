#include<iostream>

using namespace std;

class Emp
{
	private:
		string name;
	public:
		//getter
		void getName(string x)
		{
	          name = x;
		}

		//setter
		string setName()
		{
	           return name;
		}
};

int main()
{
	Emp obj;
	obj.getName("Ankit Nath");
	obj.setName();

	cout<<"The name stored in private ID is : "<<obj.setName()<<"\n";
}
