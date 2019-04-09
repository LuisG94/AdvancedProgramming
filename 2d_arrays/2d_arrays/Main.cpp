#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x[5][5];
	static int y[5][5];

	printf("int: %u %u %u %u %u\n", &x[0], &x[1], &x[2], &x[3], &x[4]);

	printf("static int: %u %u %u %u %u", y[0], y[1], y[2], y[3], y[4]);

	getchar();
	return 0;
}