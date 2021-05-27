#include<iostream>

using namespace std;

class Car
{
	private:
		int id;
	public:
		//setter
		void setID(int x)
		{
			id = x;
		}

		//getter
		int getID()
		{
			return id;
		}
};

int main()
{
	Car obj;
	obj.setID(10000);
	obj.getID();

	cout<<"The private ID is: "<<obj.getID()<<"\n";

}
