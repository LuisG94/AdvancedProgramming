#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

void printBinary(int n, char *p)
{
	do
	{
		if (n % 2 == 0)
			*p = '0';
		else
			*p = '1';

		p++;

		n = n / 2;

	} while (n > 0);
	*p = '\0';
}

int main()
{
	unsigned int bits = 65535;
	char str[20];

	for (int i = 1; i < bits; i++)
	{
		printBinary(i , str);
		printf("%d: %s\n",i, str);
	}
	
	system("pause");
	return 0;

}