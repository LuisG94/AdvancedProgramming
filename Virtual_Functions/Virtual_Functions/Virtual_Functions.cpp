#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

class Animal
{

public:
	Animal()
	{

	}

	~Animal()
	{

	}

	void Eat()
	{
		printf("Animal::Eat()\n");
	}

	virtual void Talk()
	{
		printf("Animal::Talk()\n");
	}

	virtual void Laugh() = 0;
};

class Goat : public Animal
{

public:

	Goat()
	{

	}

	~Goat()
	{

	}

	void Eat()
	{
		printf("Goat::Eat()\n");
	}

	void Talk()
	{
		printf("Goat::Talk()\n");
	}

	void Laugh()
	{
		printf("Goat::Laugh()\n");
	}

};

class Horse : public Animal
{

public:

	Horse()
	{

	}

	~Horse()
	{

	}

	void Eat()
	{
		printf("Horse::Eat()\n");
	}

	void Talk()
	{
		printf("Horse::Talk()\n");
	}

	void Laugh()
	{
		printf("Horse::Laugh()\n");
	}

};

class Cat : public Animal
{

public:

	Cat()
	{

	}

	~Cat()
	{

	}

	void Eat()
	{
		printf("Cat::Eat()\n");
	}

	void Talk()
	{
		printf("Cat::Talk()\n");
	}

	void Laugh()
	{
		printf("Cat::Laugh()\n");
	}

};

int main()
{
	Goat butters;
	Horse epona;
	Cat shadow;

	Animal *Zoo[3] = { &butters, &epona, &shadow };
	Zoo[0]->Eat();
	Zoo[0]->Talk();
	Zoo[0]->Laugh();
	Zoo[1]->Eat();
	Zoo[1]->Talk();
	Zoo[1]->Laugh();
	Zoo[2]->Eat();
	Zoo[2]->Talk();
	Zoo[2]->Laugh();





	system("pause");
	return 0;
}