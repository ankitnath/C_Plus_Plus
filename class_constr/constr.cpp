#include<iostream>

using namespace std;

class car
{
	public:
		string brand;
		string model;
		int year;
		car(string x,string y,int z);
};

car::car(string x, string y, int z)
{
	brand = x;
	model = y;
	year = z;
}

int main()
{
	//Create car objects and call the constructor with different values
	
	car obj1("BMW","X7", 1999);
	car obj2("Audi","A7",2018);

	//print values
	
	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<"\n";
	cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<endl;
}
