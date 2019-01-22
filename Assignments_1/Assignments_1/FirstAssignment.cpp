#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
	int total = 0;
	float sum = 0.0, variance = 0.0, average, stdDev, values[] = { 0.0 };

	FILE *f = fopen("numbers.txt", "r");

	for (int i = 0; i < 6; i++)
	{
		fscanf(f, "%f", &values[i]);
		printf("%f", values[i]);
	}






}