//6. Write a C++ program where a base class Animal is
// inherited by Dog and Cat. Each derived class should
//  override a sound() function to display different sounds.
#include <iostream>
using namespace std;
class Animal{
	public:
	void sound()
	{
        cout<<"\nAnimal make a different Sounds...........!";
    }
};
class Dog:public Animal{
	public:
	void sound()
	{
        cout<<"\nWoof! Woof...........!";
    }	
		
};
class Cat:public Animal{
	public:
	void sound()
	{
        cout<<"\nMeoww! Meoww...........!";
    }	
};
int main()
{
	Dog d;
	Cat c;
	d.sound();
	c.sound();
	return 0;
}