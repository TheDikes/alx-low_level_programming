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
	int alpha, ten_times; for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		while (ten_times < 10)
		{
			_putchar('\n'), ten_times++;
		}
	}
}
