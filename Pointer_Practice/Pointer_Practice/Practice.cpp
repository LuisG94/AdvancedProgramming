#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char d = 'Z';
	char a = 'D';
	float x = 3.1415;
	float *p = &x; 
	char c = 'A';
	float y = 6.2;
	float *e = &y;

	printf("value of x: %f\n", x);
	printf("value of p: %f\n\n", *p);

	*p = 1.234;
	printf("value of x: %f\n\n", x);

	printf("address of x: %u\n", &x);
	printf("value of p: %f\n", *p);
	printf("value of e: %f\n\n", *e);

	x = 2.22;
	printf("value of p: %f\n",*p);
	printf("value of x: %f\n",x);
	printf("address of d: %u\n", &d);
	printf("address of e: %u\n", &e);
	printf("address of a: %u\n", &a);
	printf("address of p: %u\n", &p);
	printf("address of y: %u\n", &y);
	printf("address of c: %u\n", &c);
	printf("address of x: %u\n", &x);


	getchar();
	return 0;
}