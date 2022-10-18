#include <stdio.h>
/**
 * main - prints alphabet in lowercase followed by a new line
 * Return: 0 success
 */
void print_alphabet(void)
{
	int love; for (love = 'a'); 
	{
		while (love <= 'z') 
		{
		_putchar(love);
		love++;
		}
		_putchar('\n');
	}
}
