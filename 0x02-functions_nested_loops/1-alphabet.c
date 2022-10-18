#include "main.h"

/*
 *main -Entry point
 *
 * Description - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	int love;
	
	love = 'a';

	while (love <= 'z')
	{
		_putchar(love), love++;
	}
	_putchar('\n')
}
