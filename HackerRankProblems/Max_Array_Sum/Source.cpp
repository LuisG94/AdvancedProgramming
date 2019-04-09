#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int best[10000];

int maxSubsetSum(int arr_count, int* arr) 
{
	best[0] = arr[0];

	if (arr[0] > arr[1])
		best[1] = arr[0];
	else
		best[1] = arr[1];

	for(int i = 2; i < arr_count; i++)
	{
		int q = arr[i];

		if (best[i - 1] > q)
		{
			q = best[i - 1];
		}
		if (arr[i]+best[i-2] > q)
		{
			q = arr[i] + best[i-2];
		}

		best[i] = q;
		
	}

	return best[arr_count-1];
}

int main()
{
	int data[5] = {-2,1,3,-4,5};
	int n_data = 5;

	int x = maxSubsetSum(n_data, data);
	printf("\n%d\n", x);

	system("pause");
	return 0;
}