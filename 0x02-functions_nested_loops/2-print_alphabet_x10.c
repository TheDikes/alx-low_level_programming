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
	int alpha = 'a';
	int ten_times = 0; while (ten_times < 10)
	{
		for (alpha <= 'z')
		{
			_putchar(alpha), alpha++;
		}
		_putchar('\n'), ten_times++;
	}
}
