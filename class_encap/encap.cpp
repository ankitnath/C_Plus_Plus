#include<iostream>

using namespace std;

class Emp
{
	private:
		int salary; //private attribute
	public:
               //setter
	       void setSalary(int x)
	       {
		       salary = x;
	       }
	       //getter
	       int getSalary()
	       {
		       return salary;
	       }
};

int main()
{
	Emp obj;
	obj.setSalary(60000);
	cout<<obj.getSalary();
}

