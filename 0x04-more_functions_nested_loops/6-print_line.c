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
		if (n <= 0)
		{
			_putchar('\n');
		} else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
