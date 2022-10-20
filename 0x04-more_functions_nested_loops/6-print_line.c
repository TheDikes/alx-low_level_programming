#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of times _ is printed
 * n is <= 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
