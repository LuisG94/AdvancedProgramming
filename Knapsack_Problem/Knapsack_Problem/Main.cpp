#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

struct WeightValue {
	int weight, value;
};

int knapsackRecursion(int availableWeight, WeightValue items[], int numItems) {
	int maxValue = 0;
	for (int i = 0; i < numItems; i++)
	{
		if (items[i].weight <= availableWeight)
		{
			int tempValue = knapsackRecursion(availableWeight - items[i].weight, items, numItems);
			if ((tempValue + items[i].value) > maxValue)
			{
				maxValue = tempValue + items[i].value;
			}
		}
	}
	return maxValue;
}

int knapsackDynamic(int availableWeight, WeightValue items[], int numItems, int knapsackMaxValue[])
{
	int maxValue = 0;
	if (knapsackMaxValue[availableWeight] > -1)
	{
		return knapsackMaxValue[availableWeight];
	}
	for (int i = 0; i < numItems; i++)
	{
		if (items[i].weight <= availableWeight)
		{
			int tempValue = knapsackDynamic(availableWeight - items[i].weight, items, numItems, knapsackMaxValue);
			if ((tempValue + items[i].value) > maxValue)
			{
				maxValue = tempValue + items[i].value;
			}
		}
	}
	knapsackMaxValue[availableWeight] = maxValue;
	return maxValue;
}



int main()
{
	WeightValue knapsack[5] = { {2,3},{3,5},{4,7},{5,9},{7,13} };

	int knapsackMax[100];

	for (int i = 0; i < 45; i++)
	{
		int knapsack_R = knapsackRecursion(i, sack, 5);

		for (int j = 0; j < 100; j++)
		{
			knapsackMax[i] = -1;
		}

		int knapsack_DP = knapsackDynamic(i, sack, 5, knapsackMax);

	}


	system("pause");
	return 0;
}