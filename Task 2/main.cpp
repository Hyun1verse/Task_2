#include <iostream>
using namespace std;


class Animal 
{
public:
	virtual void makeSound() const = 0;
	virtual ~Animal() {}
};


class Dog : public Animal 
{
public:
	void makeSound() const override
	{
		cout << "港! 港!" << endl;
	}
};


class Cat : public Animal 
{
public:	
	void makeSound() const override 
	{
		cout << "成! 成!" << endl;
	}
};


class Cow : public Animal 
{
public:
	void makeSound() const override 
	{
		cout << "澜~ 皋~" << endl;
	}
};


int main() 
{
	Animal* animals[3];
	
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();


	for (int i = 0; i < 3; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < 3; ++i) 
	{
		delete animals[i];
	}


	return 0;
}
