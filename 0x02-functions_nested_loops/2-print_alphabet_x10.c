#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * prints ten times alphabet in lowercase
 * followed by a new kine
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0; while (i < 10)
	{
		alpha = 'a'; while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
