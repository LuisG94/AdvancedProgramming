#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int fib_Recursion(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fib_Recursion(n-1) + fib_Recursion(n-2);
}

int fib_Dynamic(int n, int fib_table[])
{
	if (n == 0 || n == 1)
		return 1;
	else
		if (fib_table[n] != -1)
			return fib_table[n];
		else 
		{
			fib_table[n] = fib_Dynamic(n - 1, fib_table) + fib_Dynamic(n - 2, fib_table);
			return fib_table[n];
		}
}

int main()
{
	const int fib_num = 50;
	int values[fib_num];

	for (int x = 0; x < 25; x++)
	{
		int fib_R = fib_Recursion(x);


		for (int i = 0; i < fib_num; i++)
		{
			values[i] = -1;
		}

		int fib_DP = fib_Dynamic(x, values);

		printf("%d\t%d\n",fib_R, fib_DP);

	}

	system("pause");
	return 0;
}