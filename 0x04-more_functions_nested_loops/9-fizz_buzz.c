#include <stdio.h>
/**
 * main - Entry point for the program fizzbuzz test
 * Return: Always (0) success
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			_putchar("FizzBuzz\n");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz\n");
		}
		else if (i % 3 == 0)
		{
			_putchar("Fizz\n");
			if (i < 100)
			{
				_putchar(' ');
			}
		}
		else
		{
			_putchar("%d\n", i);
		}
	}
}
