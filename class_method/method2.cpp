#include<iostream>

using namespace std;

class car
{
	public:
		int speed(int maxSpeed);
};

int car::speed(int maxSpeed)
{
	return maxSpeed;
}
int main()
{
	car obj;
	cout<<"Max speed of car: "<<obj.speed(200)<<endl;
}


