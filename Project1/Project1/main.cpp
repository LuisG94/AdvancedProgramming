#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>

void print_A()
{
	int a[5][6];

	FILE *f = fopen("data.txt", "r");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			fscanf(f, "%d", &a[i][j]);
		}
	}
	fclose(f);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%d ", a[i][j]);
		}
		
	}


}

void print_B()
{
	FILE *f = fopen("data.txt", "r");
	int *b = (int*)malloc(sizeof(int) * 5 * 6);

	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++) 
		{
			fscanf(f, "%d", &b[i][j];
		}
	}
	fclose(f);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%d ", b[i][j]);
		}
		
	}

}

void print_C()
{
	FILE *f = fopen("data.txt", "r");

	int **c = (int**)malloc(sizeof(int*) * 5);
	for (int i = 0; i < 5; i++)
	{
		c[i] = (int*)malloc(sizeof(int) * 6);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			fscanf(f, "%d", &c[i][j]);
		}
		
	}
	fclose(f);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%d ", c[i][j]);
		}
	}
	
}

int main()
{
	printf("Print A-----------------\n");
	print_A();
	printf("\n");
	printf("Print B-----------------\n");
	//print_B();
	printf("\n");
	printf("Print C-----------------\n");
	print_C();
	printf("\n\n");

	system("pause");
	return 0;
}