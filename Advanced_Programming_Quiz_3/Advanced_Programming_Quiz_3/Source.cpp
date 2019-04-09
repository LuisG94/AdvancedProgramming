#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

class Enemy
{
protected:
	float health;
	float x, y;

public:
	

	Enemy()
	{
		printf("Instance of Enemy is being created\n");
	}

	~Enemy()
	{
		printf("Instance of Enemy is being destroyed\n");
	}

	void print_position()
	{
		x = 5;
		y = 10;
		printf("The enemy's position is at x:%f y:%f\n", x,y);
	}

	void print_Health()
	{
		health = 50.5;
		printf("The enemy's health is: %f\n", health);
	}

};

class RPG_Enemy : public Enemy
{

protected:
	float capacity;
	float damage;
	float experience;

public:

	RPG_Enemy()
	{
		printf("This is a created instance of class RPG_Enemy\n");
	}

	~RPG_Enemy()
	{
		printf("This instance of RPG_Enemy is being destroyed\n");
	}


	void print_Experience()
	{
		experience = 100;
		printf("You can get %.2f experience points for defeating this RPG_Enemy!\n", experience);
	}

	void print_Health()
	{
		health = 100;
		printf("You can get %.2f experience points for defeating this RPG_Enemy!\n", health);
	}

	void print_position()
	{
		x = 100;
		y = 135;
		printf("The position for this RPG_Enemy is at x:%.2f y:%.2\n", x,y);
	}

};

class Mage : public RPG_Enemy
{
public:

	float mana;
	int spells;

	Mage()
	{
		printf("This is a created instance of the Mage class\n");
	}

	~Mage()
	{
		printf("This instance of the Mage class is being destroyed!\n");
	}

	void print_position()
	{
		x = 25;
		y = 100;

		printf("The Mage's position is at x:%.2f, y:%.2f \n", x ,y);
	}

	void print_Health()
	{
		health = 500;
		printf("This Mage's health is: %.2f\n", health);
	}

	void print_Experience()
	{
		experience = 600;
		printf("Killing this Mage will grant you %.2f experience points\n", experience);
	}

};

class Goat : public RPG_Enemy
{
public:

	float evil_meter;
	float injustice;

	Goat()
	{
		printf("This is a created instance of the Evil Goat class\n");
	}

	~Goat()
	{
		printf("This instance of the Evil Goat class is being destroyed!\n");
	}

	Goat(int i)
	{
		if (i == 1)
		{
			printf("This Evil Goat is abusive!!!\n");
		}
		else
		{
			printf("This goat is still evil but not abusive\n");
		}
	}

	void print_position()
	{
		x = 666;
		y = 666;
		printf("This Evil Goat's position is x:%.2f, y:%.2f\n", x, y);
	}

	void print_Health()
	{
		health = 10000;
		printf("This Evil Goat's health is: %.2f\n", health);
	}

	void print_Experience()
	{
		experience = 10000;
		printf("Killing this Evil Goat will grant you %.2f experience!!!\n", experience);

	}

};







int main()
{
	Mage magus;
	magus.print_Experience();
	magus.print_Health();
	magus.print_position();
	printf("\n\n");
	Goat butters(1);
	butters.print_position();
	butters.print_Health();
	butters.print_Experience();
	printf("\n\n");
	RPG_Enemy guard;
	guard.x = 125;
	guard.y = 1000;
	guard.print_position();






	system("pause");
	return 0;
}