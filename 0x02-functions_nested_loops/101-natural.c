#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of all the multiples
 * Return: 0 success
 */
int main(void)
{
	unsigned long int a, b, sum;
	int i;

	a = 0;
	b = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		} else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	sum = a + b;
	printf("%ld\n", sum);
	return (0);
}
