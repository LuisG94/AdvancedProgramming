#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

class Superhumans 
{
	int power_level;

public:
	//constructor
	Superhumans()
	{
		printf("Superhumans are powerful because they are super, and not weak like regular humans\n");
	}
	//destructor
	~Superhumans()
	{
		printf("oh wow you destroyed a superhuman\n");
	}

	virtual int get_power_lvl()
	{
		return printf("this superhumans power level is: %d\n",power_level);
	}

	void set_power_lvl(int p)
	{
		power_level = p;
	}

};

class Superheroes : private Superhumans
{
	int power_level;

public:
	Superheroes()
	{
		printf("Superheroes are good guys\n");
	}

	Superheroes(int weapon)
	{
		if (weapon == 1)
		{
			printf("This hero carries a weapon!\n");
		}
		else
		{
			printf("This hero does not carry a weapon!\n");
		}
	}

	~Superheroes()
	{
		printf("why would you kill a superhero????\n");
	}

	int get_power_lvl()
	{
		return printf("this superheroes power level is: %d\n", power_level);
	}

	void set_power_lvl(int p)
	{
		power_level = p;
	}

};

class Supervillains : protected Superhumans
{
	int power_level;

public:
	Supervillains()
	{
		printf("Supervillains are bad guys!\n");
	}

	~Supervillains()
	{
		printf("cool you killed a villain\n");
	}

	int get_power_lvl()
	{
		return printf("this supervillains power level is: %d\n", power_level);
	}

	void set_power_lvl(int p)
	{
		power_level = p;
	}

};




int main()
{
	Superhumans Thor;
	printf("Thor------------------\n");
	Thor.set_power_lvl(25000);
	Thor.get_power_lvl();

	
	Superheroes *Hawkeye = new Superheroes;
	printf("hawkeye--------------\n");
	Hawkeye->set_power_lvl(10000);
	Hawkeye->get_power_lvl();

	Supervillains Loki;
	printf("Loki---------------\n");
	Loki.set_power_lvl(20000);
	Loki.get_power_lvl();

	if (true)
	{
		Superhumans black_widow;
		printf("black_widow----------\n");
		Supervillains vulture;
		printf("vulture---------\n");
	}

	delete Hawkeye;
	printf("hawkeye killed\n");

	if (true)
	{
		printf("defenders created!\n");
		Superheroes defenders[5];
		printf("defenders killed! :(\n");
	}

	Supervillains *sinister6 = new Supervillains[6];
	delete[]sinister6;

	printf("SPIDERMAN!\n");
	Superheroes spiderman(2);

	
		


	system("pause");
	return 0;
}