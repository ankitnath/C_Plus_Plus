#include<iostream>

using namespace std;

int main()
{
 try
  {
	int age; 
	
	cout<<"VERIFYING LEGAL AGE FOR DRINKING ALCOHOL\n"<<endl;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"\n";

	if(age >= 18)
	{
		cout<<" You are allowed! Place your order\n";
	}
	else
	{
		throw(age);
	}

   }
  catch(int num)
  {
	 cout<<"Access denied! The legal age to drink alcohol is 18+\n"<<endl;
	 cout<<"Your age "<<num<<" is not alllowed"<<"\n";
  }
}
