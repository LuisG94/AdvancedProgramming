#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char **p = (char**)malloc(sizeof(char*) * 3);

	for (int i = 0; i < 3; i++)
	{
		p[i] = (char*)malloc(sizeof(char) * 5);
	}

	printf("address of p: %u\n", p);
	printf("address of p[0]: %u\n", p[0]);
	printf("address of p[1]: %u\n", p[1]);
	printf("address of p[2]: %u\n", p[2]);
	printf("address of &p: %u\n", &p);
	printf("address of &p[0]: %u\n", &p[0]);
	printf("address of &p[1]: %u\n", &p[1]);
	printf("address of &p[2]: %u\n", &p[2]);



	system("pause");
	return 0;
}