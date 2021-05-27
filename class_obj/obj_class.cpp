#include<iostream>

using namespace std;

class Car                     //the class
{
	public:                   //access specifier
		int year;          //Attribute(int variable)
		string brand;     //Attribute(string variable)
		string model;
};

int main()
{
	//Create an object of the car
	Car obj1;
	obj1.brand = "Ford";
	obj1.model = "Mustand";
	obj1.year = 1990;

	//Create another object of the car
	Car obj2;
	obj2.brand = "BMW";
	obj2.model = "X7";
	obj2.year = 1989;

	//print attribute values
	
	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<"\n";
	cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<"\n";

}


