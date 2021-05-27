#include<iostream>

using namespace std;

class Employee
{
	protected: //protected access specifier
		int salary;
};

//Derived class
class Child: public Employee
{
	public:
		int bonus;
		//setter
		void setsalary(int x)
		{
			salary=x;
		}
		//getter
		int getsalary()
		{
			return salary;
		}
};

int main()
{
	Child obj;
	obj.bonus = 23000;
	obj.setsalary(34000);
	obj.getsalary();
	cout<<"Salary : "<<obj.getsalary()<<"  Bonus : "<<obj.bonus<<"\n";
}

