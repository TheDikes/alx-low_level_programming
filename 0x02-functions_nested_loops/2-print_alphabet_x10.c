#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * prints ten times alphabet in lowercase
 * followed by a new kine
 */
void print_alphabet_x10(void)
{
	int alpha;
	int times;

	count = 0;

	while (count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
			_putchar('\n'), count++;
		}
	}
}
