#include "main.h"
/**
 * more_numbers - prints ten times the numbers, from 0 - 14
 * followed by a new line
 */
void more_numbers(void)
{
	int num;
	int count;

	while (count < 10)
	{
		for (num = 0; num <= 14; ++num)
		{
			_putchar(num);
		}
		_putchar('\n');
		count++;
	}
}
