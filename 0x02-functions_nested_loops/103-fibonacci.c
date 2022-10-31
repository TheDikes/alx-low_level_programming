#include <stdio.h>

/**
 * main - Entry point of program
 * Return: Always (0) success
 */
int main(void)
{
	int a;
	unsigned long int b, c, d, total;

	b = 1;
	c = 2;
	total = 0;

	for (a = 1; a <= 33; a++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			total = total + b;
		}
		d = b + c;
		b = c;
		c = d;
	}
	printf("%lu\n", total);
	return (0);
}
