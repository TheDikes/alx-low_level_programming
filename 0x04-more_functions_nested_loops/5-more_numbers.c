#include "main.h"
/**
 * more_numbers - prints ten times the numbers, from 0 - 14
 * followed by a new line
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
		count++;
	}
}
