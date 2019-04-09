#pragma warning (disable:4996)
#include<stdlib.h>
#include<stdio.h>


const int max_num = 10;

void read_Array(const int *Array, const char *filename)
{
	FILE *f = fopen("filename","r");

	int *data = (int*)malloc(sizeof(int)*max_num);

	for (int i = 0; i < max_num; i++)
	{
		fscanf(f,"%d", &data[i]);
	}

}

void print_Array(const int *Array)
{
	for(int i = 0;)
}





int main()
{
	int *Array = (int*)malloc(sizeof(int)*max_num);

	FILE *f = fopen("data.txt","r");

	for (int i = 0; i < max_num; i++)
	{
		fscanf(f,"%d", &Array[i]);
	}
	for (int i = 0; i < max_num; i++)
	{
		printf("%d\n",Array[i]);
	}

	read_Array(Array, "data.txt");

	system("pause");
	return 0;
}