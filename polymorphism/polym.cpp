#include<iostream>

using namespace std;

class Animals
{
	public:
		void sound()
		{
			cout<<"Each animal has distinct sound\n";
		}
};

class Pigs: public Animals
{
	public:
		void sound()
		{
			cout<<"Pigs say wee wee\n";
		}
};

class Cats: public Animals
{
	public:
		void sound()
		{
			cout<<"Cats say Meow Meow\n";
		}
};

int main()
{
	Animals myAnimal;
	Pigs myPig;
	Cats myCat;

        myAnimal.sound();
	myPig.sound();
	myCat.sound();
}
