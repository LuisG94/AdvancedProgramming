#pragma warning(disable:4996)
#include <stdio.h>
//#include <stdlib.h>
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
		printf("%f\n", values[i]);
		sum += values[i];
		total++;
	}
	fclose(f);

	average = sum / total;

	/*for (int i = 0; i < total; i++)
	{
		variance += pow(values[i] - average, 2);
	}

	variance = variance / total;
	stdDev = sqrt(variance);*/


	printf("The Average of the values = %f\n", average);
	printf("The Standard Deviation of the values = %f\n", average);
	


	system("pause");


	return 0;

}